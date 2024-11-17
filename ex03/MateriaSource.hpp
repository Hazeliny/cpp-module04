/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:47:12 by linyao            #+#    #+#             */
/*   Updated: 2024/11/17 00:02:25 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    protected:
        AMateria *_inventory[4];
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &other);
        MateriaSource &operator=(MateriaSource const &other);
        ~MateriaSource(void);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const &type);
};
