/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:28:43 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 14:58:26 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* _dogBrain;
    public:
        Dog(void);
        Dog(std::string const &type);
        Dog(Dog const &other);
        ~Dog(void);
        Dog &operator=(Dog const &other);
        void makeSound(void) const;
        Brain &getBrain(void) const;
};

class Cat : public Animal {
    private:
        Brain* _catBrain;
    public:
        Cat(void);
        Cat(std::string const &type);
        Cat(Cat const &other);
        ~Cat(void);
        Cat &operator=(Cat const &other);
        void makeSound(void) const;
        Brain &getBrain(void) const;
};
