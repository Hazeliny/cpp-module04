/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:56:57 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 00:34:57 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "MateriaSource class: default constructor called" << std::endl; 
}
        
MateriaSource::MateriaSource(MateriaSource const &other) {
    *this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    std::cout << "MateriaSource class: reloaded assignment operator called" << std::endl;
    return *this;
}
        
MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
    std::cout << "MateriaSource class: destructor called" << std::endl;
}
        
void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!this->_inventory[i]) {
            std::cout << "MateriaSource class: MateriaSource is learning " << m->getType() << std::endl;
            this->_inventory[i] = m;
            return;
        }
    }
    std::cout << "MateriaSource class: Inventory is full, AMateria object's pointer will be deleted" << std::endl;
    delete m;
}
        
AMateria* MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    }
    std::cout << "MateriaSource class: This is no suitable AMateria" << std::endl;
    return NULL;
}
