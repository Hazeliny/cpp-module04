/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:30:39 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 00:42:18 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

Dog::Dog(void) : Animal("Dog") {
    this->_type = "Dog";
    std::cout << "Dog class: default constructor of " << this->_type << " called" << std::endl;
}

Dog::Dog(std::string const &type) : Animal(type) {
    this->_type = type;
    std::cout << "Dog constructor with the type argument: " << this->_type << " called" << std::endl;
}
        
Dog::Dog(Dog const &other) : Animal(other) {
    *this = other;
    std::cout << "Dog copy constructor of " << this->_type << " called" << std::endl;
}
        
Dog::~Dog(void) {
    std::cout << "Dog destructor of " << this->_type << " called" << std::endl;
}

Dog &Dog::operator=(Dog const &other) {
//    if (this != &other)
//        this->_type = other._type;
    Animal::operator=(other);
    return *this;
}
        
void Dog::makeSound(void) const {
    std::cout << "Dog class: " << this->_type << " from Animal class: " << Animal::_type << " makes barking sound" << std::endl;
}


Cat::Cat(void) : Animal("Cat") {
    this->_type = "Cat";
    std::cout << "Cat class: default constructor of " << this->_type << " called" << std::endl;
}

Cat::Cat(std::string const &type) : Animal(type) {
    this->_type = type;
    std::cout << "Cat constructor with the type argument: " << this->_type << " called" << std::endl;
}
        
Cat::Cat(Cat const &other) : Animal(other) {
    *this = other;
    std::cout << "Cat copy constructor of " << this->_type << " called" << std::endl;
}
        
Cat::~Cat(void) {
    std::cout << "Cat destructor of " << this->_type << " called" << std::endl;
}
        
Cat &Cat::operator=(Cat const &other) {
    Animal::operator=(other);
    return *this;
}
        
void Cat::makeSound(void) const {
    std::cout << "Cat class: " << this->_type << " from Animal class: " << Animal::_type << " makes meowing sound" << std::endl;
}
