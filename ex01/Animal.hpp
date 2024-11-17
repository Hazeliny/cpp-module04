/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:26:07 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 14:59:13 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(std::string const &type);
        Animal(Animal const &other);
        virtual ~Animal(void);
        Animal &operator=(Animal const &other);
        std::string const &getType(void) const;
        virtual void makeSound(void) const;
        virtual Brain &getBrain(void) const = 0; //纯虚函数
};
