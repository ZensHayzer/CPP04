/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:54:46 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/11 18:43:13 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()	{
	std::cout << "A brain has spawned." << std::endl;
}

Brain::Brain(const Brain & src)	{
	for (int i = 0; i < 100; i++)
		_ideas[i] = src.getIdeas(i);
	
	return;
}

Brain::~Brain()	{
	std::cout << "A brain has disapeard." << std::endl;
	
	return;
}

std::string	Brain::getIdeas(int i) const	{
	return _ideas[i];
}