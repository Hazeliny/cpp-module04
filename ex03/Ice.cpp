/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:11:34 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 00:48:44 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice") {
    std::cout << "constructor of Ice class with parameter: " << this->getType() << " called" << std::endl;
}
        
Ice::Ice(Ice const &other) :AMateria(other) {
    std::cout << "copy constructor of Ice class called" << std::endl;
}
        
Ice::~Ice(void) {
    std::cout << "destructor of Ice class called" << std::endl;
}
        
Ice const &Ice::operator=(Ice const &other) {
    this->_type = other._type;
    return *this;
}
// return a new instance of the same type        
AMateria* Ice::clone(void) const {
    return (new Ice(*this));
}
        
void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
