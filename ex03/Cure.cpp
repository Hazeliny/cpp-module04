/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:13:14 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 00:49:14 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure") {
    std::cout << "constructor of Cure class with parameter: " << this->getType() << " called" << std::endl;
}
        
Cure::Cure(Cure const &other) : AMateria(other) {
    *this = other;
    std::cout << "copy constructor of Cure class called" << std::endl;
}
        
Cure &Cure::operator=(Cure const &other) {
    this->_type = other._type;
    return *this;
}
        
Cure::~Cure(void) {
    std::cout << "destructor of Cure class called" << std::endl;
}
        
AMateria* Cure::clone() const {
    return (new Cure(*this));
}
        
void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
