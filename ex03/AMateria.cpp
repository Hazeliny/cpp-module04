/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:07:48 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 00:58:23 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << "constructor of AMateria object with type: " << this->getType() << " called" << std::endl;
}
        
AMateria::AMateria(AMateria const &other) {
    *this = other;
    std::cout << "copy constructor of AMateria object with type: " << this->getType() << " called" << std::endl;
}

AMateria::~AMateria(void) {
    std::cout << "destructor of AMateria object with type: " << this->getType() << " called" << std::endl;
}
        
AMateria const &AMateria::operator=(AMateria const &other) {
    this->_type = other._type;
    std::cout << "reloaded assignment operator of AMateria object with type: " << this->getType() << " called" << std::endl;
    return *this;
}
        
std::string const &AMateria::getType(void) const { //Returns the materia type
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
    std::cout << "AMateria: this message will be ignored" << std::endl;
}
