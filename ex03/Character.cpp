/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:41:50 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 23:42:08 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter() {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "Character class: default constructor called" << std::endl;
}
        
Character::Character(std::string const &name) : ICharacter(name) {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "Character class: constructor with parameter: " << this->getName() << " called" << std::endl;
}
// Deep copy is a must        
Character::Character(Character const &other) {
    *this = other;
}
        
Character::~Character(void) {
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
    std::cout << "Character class: destructor of " << this->getName() << " called" << std::endl;
}
//Deep copy is a must
// During copy, the Materias of a Character must be deleted before the new ones are added to their inventory       
Character &Character::operator=(Character const &other) {
    if (this != &other) {
        ICharacter::operator=(other);
        for (int i = 0; i < 4; i++) {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    std::cout << "Character class: reloaded assignment operator called" << std::endl;
    return *this;
}
        
std::string const &Character::getName() const {
    return (this->_name);
}
        
void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            std::cout << "Character class: " << this->getName() << " equips " << m->getType() << " in slot " << i << std::endl;
            return ;
        }
    }
    std::cout << "Character class: " << this->getName() << " cannot equip " << m->getType() << ", because inventory is full" << std::endl;
    delete m;
}
        
void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        this->_inventory[idx] = NULL; // unequip() member function must NOT delete the Materia
        std::cout << "Character class: " << this->getName() << " unequips " << this->_inventory[idx]->getType() << " in slot " << idx << std::endl;
    }
    else
        std::cout << "Character class: " << this->getName() << "can do nothing for Materia doesn't exist" << std::endl;
}
        
void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
    else
        std::cout << "Character class: " << this->getName() << "doesn't do anything for Materia doesn't exist" << std::endl;
}
