/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:19:17 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 01:03:51 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Ice.hpp"

class ICharacter
{
    protected:
        std::string _name;
        ICharacter(void);
        ICharacter(std::string const &name);
        ICharacter(ICharacter const &other);
        ICharacter const &operator=(ICharacter const &other);
    public:
        virtual ~ICharacter();
        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};
