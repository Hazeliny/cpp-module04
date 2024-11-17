/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:27:54 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 18:45:54 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default_animal") {
    std::cout << "Animal: " << this->getType() << " default constructor can only be called indirectly while its derived classes are constructed" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
    std::cout << "Animal: " << this->getType() << " constructor can only be called indirectly while its derived classes are constructed" << std::endl;
}

Animal::Animal(Animal const &other) {
    *this = other;
    std::cout << "Animal: " << this->getType() << " copy constructor called" << std::endl;
}
        
Animal::~Animal(void) {
    std::cout << "Animal: " << this->getType() << " destructor called" << std::endl;
}
        
Animal &Animal::operator=(Animal const &other) {
    if (this != &other)
        this->_type = other.getType();
    return *this;
}
        
std::string const &Animal::getType(void) const {
    return this->_type;
}
// Pure virtual function   
/*     
void Animal::makeSound(void) const {
    std::cout << "Animal " << this->getType() << " makes a sound" << std::endl;
}
*/
