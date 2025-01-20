/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:14:42 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/20 14:14:43 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    int j = 1;
    int i = 0;
    while(j < argc)
    {
        i = 0;
        while(argv[j][i])
        {
            std::cout << (char)toupper(argv[j][i]);
            i++;
        }
        j++;
    }
    std::cout << std::endl;
    return 0;
}