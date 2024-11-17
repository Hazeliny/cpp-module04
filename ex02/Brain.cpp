/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:50:26 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 16:23:52 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain class: default constructor called" << std::endl;
}

Brain::Brain(Brain const &other) {
    *this = other;
    std::cout << "Brain class: copy constructor called" << std::endl;
}
        
Brain::~Brain(void) {
    std::cout << "Brain calss: destructor called" << std::endl;
}
        
Brain &Brain::operator=(Brain const &other) {
    if (this != &other)
        std::copy(other._ideas, other._ideas + 100, this->_ideas);
    std::cout << "Brain class: reloaded assignment operator called" << std::endl;
    return *this;
}
        
std::string const &Brain::getIdea(int const &index) const {
    static const std::string noIdeaMessage = "\033[33mNo idea\033[0m";
    if (index >= 0 && index < 100)
        return (this->_ideas[index]);
    return (noIdeaMessage);
}
        
void Brain::setIdea(std::string const &idea, int const &index) {
    if (index >= 0 && index < 100)
        this->_ideas[index] = idea;
}
