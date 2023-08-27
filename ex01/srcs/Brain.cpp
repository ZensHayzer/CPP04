/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:54:46 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 16:42:35 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()	{
	std::cout << "A brain has spawned." << std::endl;
}

Brain::Brain(const Brain & src)	{
	if (this != &src)
		*this = src;
	
	return;
}

Brain::~Brain()	{
	std::cout << "A brain has disapeard." << std::endl;
	
	return;
}

std::string	Brain::getIdea(int i) const	{
	return _ideas[i];
}

void	Brain::setIdea(int i, std::string str)	{
	_ideas[i] = str;
}

Brain	&Brain::operator=(const Brain & src)	{
	if (this != &src)	{
		for (int i = 0; i < 100; i++)	{
			_ideas[i] = src.getIdea(i);
		}
	}
	return (*this);
}
