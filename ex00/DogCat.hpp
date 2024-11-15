/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:28:43 by linyao            #+#    #+#             */
/*   Updated: 2024/11/15 23:11:57 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(void);
        Dog(std::string const &type);
        Dog(Dog const &other);
        ~Dog(void);
        Dog &operator=(Dog const &other);
        void makeSound(void) const;
};

class Cat : public Animal {
    public:
        Cat(void);
        Cat(std::string const &type);
        Cat(Cat const &other);
        ~Cat(void);
        Cat &operator=(Cat const &other);
        void makeSound(void) const;
};
