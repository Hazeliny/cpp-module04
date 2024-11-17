/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:47:18 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 13:00:48 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(Brain const &other);
        ~Brain(void);
        Brain &operator=(Brain const &other);
        std::string const &getIdea(int const &index) const;
        void setIdea(std::string const &idea, int const &index);
};
