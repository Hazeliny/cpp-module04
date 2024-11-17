/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:22:10 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 23:36:59 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        AMateria* _inventory[4];
    public:
        Character(void);
        Character(std::string const &name);
        Character(Character const &other); // Deep copy is a must
        ~Character(void);
        Character &operator=(Character const &other); //Deep copy is a must
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
