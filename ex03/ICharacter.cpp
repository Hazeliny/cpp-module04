/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:21:12 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 01:04:09 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void) : _name("default") {
    std::cout << "default constructor of ICharacter class called indirectly" << std::endl;
}

ICharacter::ICharacter(std::string const &name) : _name(name) {
    std::cout << "constructor of ICharacter class with parameter: " << this->_name << std::endl;
}

ICharacter::ICharacter(ICharacter const &other) {
    *this = other;
    std::cout << "copy constructor of ICharacter class: " << this->_name << std::endl;
}
        
ICharacter const &ICharacter::operator=(ICharacter const &other) {
    if (this != &other)
        this->_name = other._name;
    std::cout << "reloaded assignment operator of ICharacter class called" << std::endl;
    return *this;
}

ICharacter::~ICharacter(void) {
    std::cout << "destructor of ICharacter class called" << std::endl;
}
