/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:14:36 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/21 17:05:04 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_H
#define PHONE_BOOK_CLASS_H

#define MAX_USER 8

#include <iostream>

class Contact{
public:
    std::string lastName;
    std::string firstName;
    std::string nickName;
    std::string darkestSecret;

    int number;
    
    int add;
    int exit;
    int search;

    Contact(void);
    ~Contact(void);
};

class PhoneBook{
private:
    Contact contacts[MAX_USER];
    int nbContact;

public:
    void addUser(void);
    void printContact(int i)const;
    void searchContact(void) const;

    PhoneBook(void);
    ~PhoneBook(void);
};

#endif