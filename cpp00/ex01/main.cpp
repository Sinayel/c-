/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:14:38 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/26 16:50:35 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void displayMenu() {
    std::cout << "\nAvailable commands: ADD, SEARCH, EXIT\n";
    std::cout << "Enter command: ";
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to your PhoneBook!\n";

    while (true) {
        displayMenu();
        std::getline(std::cin, command);

        for (std::string::size_type i = 0; i < command.size(); ++i)
            command[i] = toupper(command[i]); 

        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
        } else if (command == "EXIT") {
            std::cout << "Exiting PhoneBook. Goodbye!\n";
            break;
        } else {
            std::cout << "Invalid command!\n";
        }
    }

    return 0;
}
