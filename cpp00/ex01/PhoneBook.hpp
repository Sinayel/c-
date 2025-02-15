/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:14:36 by ylouvel           #+#    #+#             */
/*   Updated: 2025/02/01 15:21:49 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdlib>
#include <sstream>
#include <limits>

class Contact {
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    void displaySummary(int index) const {
        std::cout << std::setw(10) << index << " | "
                  << std::setw(10) << truncate(firstName) << " | "
                  << std::setw(10) << truncate(lastName) << " | "
                  << std::setw(10) << truncate(nickname) << std::endl;
    }

    void displayDetails() const {
        std::cout << "--- Contact Details ---" << std::endl;
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
    }

private:
    std::string truncate(const std::string& str) const {
        return (str.length() > 10) ? str.substr(0, 9) + "." : str;
    }
};

class PhoneBook {
public:
    PhoneBook() : contactCount(0), oldestIndex(0) {};

    void addContact() {
        int index = (contactCount < 8) ? contactCount : oldestIndex;

        contacts[index].firstName = promptField("Enter First Name: ");
        contacts[index].lastName = promptField("Enter Last Name: ");
        contacts[index].nickname = promptField("Enter Nickname: ");
        contacts[index].phoneNumber = promptField("Enter Phone Number (digits only): ", true);
        contacts[index].darkestSecret = promptField("Enter Darkest Secret: ");

        if (contactCount < 8) {
            ++contactCount;
        }
        
        oldestIndex = (oldestIndex + 1) % 8;
        
        std::cout << "Contact added successfully!" << std::endl;
    }

    void searchContacts() const {
        if (contactCount == 0) {
            std::cout << "No contacts available." << std::endl;
            return;
        }

        std::cout << "     Index | First Name |  Last Name |   Nickname" << std::endl;

        for (int i = 0; i < contactCount; ++i) {
            int index = (oldestIndex + contactCount - 1 - i) % contactCount; 
            contacts[index].displaySummary(i + 1);
        }

        std::cout << "Enter the index of the contact to view: ";
        std::string input;
        std::getline(std::cin, input);

        if (!isNumber(input)) {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            return;
        }

        int index = std::atoi(input.c_str());
        if (index < 1 || index > contactCount) {
            std::cout << "Invalid index. Please enter a number between 1 and " << contactCount << "." << std::endl;
            return;
        }

        int realIndex = (oldestIndex + contactCount - index) % contactCount;
        contacts[realIndex].displayDetails();
    }

private:
    Contact contacts[8];
    int contactCount;
    int oldestIndex;

    std::string promptField(const std::string& prompt, bool isNumeric = false) {
        std::string value;
        while (true) {
            std::cout << prompt;
            std::getline(std::cin, value);

            if (value.empty()) {
                std::cout << "This field cannot be empty. Please try again." << std::endl;
            } else if (isNumeric && !isNumber(value)) {
                std::cout << "This field must contain digits only. Please try again." << std::endl;
            } else {
                break;
            }
        }
        return value;
    }

    bool isNumber(const std::string& str) const {
        for (std::string::size_type i = 0; i < str.size(); ++i) {
            if (!std::isdigit(str[i])) return false;
        }
        return true;
    }
};
