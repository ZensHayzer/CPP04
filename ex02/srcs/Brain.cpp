/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:54:46 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 12:31:49 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()	{
	std::cout << "A brain has spawned." << std::endl;
}

Brain::Brain(const Brain & src)	{
	*this = src;
	
	return;
}

Brain::~Brain()	{
	std::cout << "A brain has disapeard." << std::endl;
	
	return;
}

Brain	&Brain::operator=(const Brain & src)	{
	if (this != &src)	{
		for (int i = 0; i < 100; i++)
			ideas[i] = ideas[i];
	}
	return (*this);
}