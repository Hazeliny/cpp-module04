/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:34:49 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 12:18:05 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongAnimal::WrongAnimal(void) : _type("wrong_default") {
    std::cout << "WrongAnimal: " << this->_type << " default constructor called" << std::endl;
}
        
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "WrongAnimal: " << this->_type << " constructor called" << std::endl;
}
        
WrongAnimal::WrongAnimal(WrongAnimal const &other) {
    *this = other;
    std::cout << "WrongAnimal: " << this->_type << " copy constructor called" << std::endl;
}
        
WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}
        
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal: " << this->_type << " makes WrongAnimal sound" << std::endl;
}


WrongCat::WrongCat(void) : WrongAnimal("wrong_cat") {
    this->_type = "wrong_cat";
    std::cout << "WrongCat class: default constructor of " << this->_type << " called" << std::endl;
}
        
WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    this->_type = type;
    std::cout << "WrongCat constructor with the type argument: " << this->_type << " called" << std::endl;
}
       
WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other) {
    *this = other;
    std::cout << "WrongCat copy constructor of " << this->_type << " called" << std::endl;
}
        
WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor of " << this->_type << " called" << std::endl;
}
        
WrongCat &WrongCat::operator=(WrongCat const &other) {
    WrongAnimal::operator=(other);
    return *this;
}
        
void WrongCat::makeSound(void) const {
    std::cout << "WrongCat: " << this->_type << " makes WrongCat sound" << std::endl;
}
