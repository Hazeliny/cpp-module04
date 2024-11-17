/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:26:07 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 18:11:43 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string _type;
        Animal(void);
        Animal(std::string const &type);
    public:
        Animal(Animal const &other);
        virtual ~Animal(void);
        Animal &operator=(Animal const &other);
        std::string const &getType(void) const;
        virtual void makeSound(void) const = 0; // Pure virtual function
        virtual Brain &getBrain(void) const = 0; //纯虚函数 Pure virtual function
};
