/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:02:43 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/27 12:03:32 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
    private:
        std::string _name;
        std::string _type;
    public:
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);
        void setType(std::string type);
};
