/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:14:38 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/24 16:56:39 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {
    firstName = "";
    lastName = "";
    nickName = "";
    darkestSecret = "";
    number = 0;
    return ;
}

PhoneBook::PhoneBook() : nbContact(0){
    return ;
}

Contact::~Contact(){
    std::cout << "Destructor Called !" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(){
    std::cout << "Destructor Called !" << std::endl;
    return ;
}

void PhoneBook::displayContacts() const {
    if (nbContact == 0) {
        std::cout << "No contacts available!" << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    for (int i = 0; i < nbContact; ++i) {
        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << truncate(contacts[i].firstName) << "|"
                  << std::setw(10) << truncate(contacts[i].lastName) << "|"
                  << std::setw(10) << truncate(contacts[i].nickName) << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
}

std::string PhoneBook::truncate(const std::string &str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

int PhoneBook::searchContact() const {
    if (nbContact == 0) {
        std::cout << "No contacts to search!" << std::endl;
        return 1;
    }

    displayContacts();

    std::string input;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> input;

    if (input.length() != 1 || input[0] < '1' || input[0] > '8') {
        std::cout << "Invalid input! Please enter a number between 1 and 8." << std::endl;
        return 1;
    }

    int index = input[0] - '0';

    if (index > 0 && index <= nbContact) {
        printContact(index - 1);
    } else {
        std::cout << "Index out of range!" << std::endl;
        return 1;
    }

    return 0;
}

void PhoneBook::printContact(int i) const {
    std::cout << "------------- Contact Details -------------" << std::endl;
    std::cout << "First name: " << contacts[i].firstName << std::endl;
    std::cout << "Last name: " << contacts[i].lastName << std::endl;
    std::cout << "Nickname: " << contacts[i].nickName << std::endl;
    std::cout << "Darkest secret: " << contacts[i].darkestSecret << std::endl;
    std::cout << "Number: " << contacts[i].number << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

std::string getInput(const std::string &prompt) {
    std::string input;
    do {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cerr << "This field cannot be empty. Please try again." << std::endl;
        }
    } while (input.empty());
    return input;
}

void PhoneBook::addUser() {
    Contact newContact;

    newContact.firstName = getInput("Enter first name: ");
    newContact.lastName = getInput("Enter last name: ");
    newContact.nickName = getInput("Enter nickname: ");
    newContact.darkestSecret = getInput("Enter darkest secret: ");

    std::string inputNumber = getInput("Enter phone number: ");
    std::istringstream iss(inputNumber);
    if (!(iss >> newContact.number) || newContact.number <= 0) {
        std::cerr << "Invalid number! Defaulting to 0." << std::endl;
        newContact.number = 0;
    }

    if (nbContact < MAX_USER) {
        contacts[nbContact++] = newContact;
    } else {
        for (int i = 0; i < MAX_USER - 1; ++i) {
            contacts[i] = contacts[i + 1];
        }
        contacts[MAX_USER - 1] = newContact;
    }

    std::cout << "Contact added successfully!" << std::endl;
}

int main()
{
    PhoneBook instance;
    std::string cmd;

    while(1)
    {
        std::cout << "What do you want to do ? ADD, SEARCH or EXIT : ";
        std::cin >> cmd;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if(cmd == "ADD")
            instance.addUser();
        else if(cmd == "EXIT")
            break;
        else if(cmd == "SEARCH")
            instance.searchContact();
        else
            std::cerr << "Invalid command!" << std::endl;
    }
    return 0;
}