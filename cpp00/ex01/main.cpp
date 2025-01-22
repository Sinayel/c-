/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:14:38 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/21 17:06:04 by ylouvel          ###   ########.fr       */
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

void PhoneBook::printContact(int i)const{
    std::cout << "-------------" << std::endl;
    std::cout << "Contact " << (i + 1) << ":" << std::endl;
    std::cout << "First name = " << contacts[i].firstName << std::endl;
    std::cout << "Last name = " << contacts[i].lastName << std::endl;
    std::cout << "Nickname = " << contacts[i].nickName << std::endl;
    std::cout << "Darkest secret = " << contacts[i].darkestSecret << std::endl;
    std::cout << "Number = " << contacts[i].number << std::endl;
    std::cout << "-------------" << std::endl;
}

void PhoneBook::addUser() {
    if (nbContact >= MAX_USER) {
        std::cout << "PhoneBook is full. Cannot add more contacts!" << std::endl;
        return;
    }

    Contact newContact;

    std::cout << "Enter first name : ";
    std::cin >> newContact.firstName;

    std::cout << "Enter last name : ";
    std::cin >> newContact.lastName;

    std::cout << "Enter nickname name : ";
    std::cin >> newContact.nickName;

    std::cin.ignore();
    std::cout << "Enter darkest secret : ";
    std::getline(std::cin, newContact.darkestSecret);

    std::cout << "Enter number : ";
    std::string inputNumber;
    std::getline(std::cin, inputNumber);
    try {
        newContact.number = std::stoi(inputNumber);
    } catch (...) {
        std::cerr << "Invalid number! Defaulting to 0." << std::endl;
        newContact.number = 0;
    }

    contacts[nbContact] = newContact;
    nbContact++;

    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact()const{
    int index;
    std::cout << "What index of contact do you want ? " << std::endl;
    std::cin >> index;
    if(index > 0 && index <= 8 && index <= nbContact)
        printContact(index - 1);
    else
        std::cout << "Not in case !" << std::endl;
}

int main()
{
    PhoneBook instance;
    std::string answer;
    std::string cmd;

    while(answer != "EXIT")
    {
        std::cout << "What do you want to do ? ADD, SEARCH or EXIT : ";
        std::cin >> answer;
        if(answer == "ADD")
            instance.addUser();
        else if(answer == "EXIT")
            exit(0);
        else if(answer == "SEARCH")
            instance.searchContact();
    }
    return 0;
}