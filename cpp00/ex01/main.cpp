/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:14:38 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/20 14:18:16 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int main()
{
    PhoneBook instance;
    
    return 0;
}