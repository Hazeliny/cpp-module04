/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:31:42 by linyao            #+#    #+#             */
/*   Updated: 2024/11/15 23:57:19 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &other);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &other);
        virtual void makeSound(void) const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(std::string type);
        WrongCat(WrongCat const &other);
        virtual ~WrongCat(void);
        WrongCat &operator=(WrongCat const &other);
        void makeSound(void) const;
};
