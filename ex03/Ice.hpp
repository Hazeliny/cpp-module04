/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:10:20 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 21:38:08 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice(void);
        Ice(Ice const &other);
        ~Ice(void);
        Ice const &operator=(Ice const &other);
        virtual AMateria* clone(void) const;
        void use(ICharacter& target);
};

