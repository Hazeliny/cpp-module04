/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:30:39 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 18:41:20 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

Dog::Dog(void) : Animal("Dog"), _dogBrain(new Brain()) {
    this->_type = "Dog";
    std::cout << "Dog class: default constructor of " << this->_type << " called" << std::endl;
}

Dog::Dog(std::string const &type) : Animal(type), _dogBrain(new Brain()) {
    this->_type = type;
    std::cout << "Dog constructor with the type argument: " << this->_type << " called" << std::endl;
}
        
Dog::Dog(Dog const &other) : Animal(other), _dogBrain(new Brain(*other._dogBrain)) {
//    *this = other;
//    this->_dogBrain = new Brain(*other._dogBrain);
    std::cout << "Dog class: copy constructor of " << this->_type << " called" << std::endl;
}
        
Dog::~Dog(void) {
    std::cout << "Dog class: destructor of " << this->_type << " called" << std::endl;
    delete this->_dogBrain;
}

Dog &Dog::operator=(Dog const &other) {
    if (this != &other) {
        Animal::operator=(other);
        *this->_dogBrain = *other._dogBrain;
    }
    std::cout << "Dog class: reloaded assignment operator called" << std::endl;
    return *this;
}
        
void Dog::makeSound(void) const {
    std::cout << "Dog class: " << this->getType() << " from Animal class: " << Animal::_type << " makes barking sound" << std::endl;
}

Brain &Dog::getBrain(void) const {
    return (*this->_dogBrain);
}

Cat::Cat(void) : Animal("Cat"), _catBrain(new Brain()) {
    this->_type = "Cat";
    std::cout << "Cat class: default constructor of " << this->_type << " called" << std::endl;
}

Cat::Cat(std::string const &type) : Animal(type), _catBrain(new Brain()) {
    this->_type = type;
    std::cout << "Cat constructor with the type argument: " << this->_type << " called" << std::endl;
}
        
Cat::Cat(Cat const &other) : Animal(other), _catBrain(new Brain(*other._catBrain)) {
//    *this = other;
    std::cout << "Cat class: copy constructor of " << this->_type << " called" << std::endl;
}
        
Cat::~Cat(void) {
    std::cout << "Cat class: destructor of " << this->_type << " called" << std::endl;
    delete this->_catBrain;
}
        
Cat &Cat::operator=(Cat const &other) {
    if (this != &other) {
        Animal::operator=(other);
        *this->_catBrain = *other._catBrain;
    }
    std::cout << "Cat class: reloaded assignment operator called" << std::endl;
    return *this;
}
        
void Cat::makeSound(void) const {
    std::cout << "Cat class: " << this->getType() << " from Animal class: " << Animal::_type << " makes meowing sound" << std::endl;
}

Brain &Cat::getBrain(void) const {
    return (*this->_catBrain);
}
