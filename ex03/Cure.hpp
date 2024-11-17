/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:12:34 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 00:40:08 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure(void);
        Cure(Cure const &other);
        Cure &operator=(Cure const &other);
        ~Cure(void);
        AMateria* clone() const;
        void use(ICharacter& target);
};
