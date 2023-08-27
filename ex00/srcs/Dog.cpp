/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 16:52:12 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(const Dog & src)	{
	std::cout << "You copied a dog !" << std::endl;
	if (this != &src)
		*this = src;
	
	return;
}

Dog::~Dog()	{
	std::cout << "You deleted a dog !" << std::endl;
	
	return;
}

Dog	&Dog::operator=(const Dog & src)	{
	if (this != &src)	{
		_type = src._type;
	}
	return (*this);
}

void	Dog::makeSound() const	{
	std::cout << "WOUAFFFFFFF" << std::endl;
	
	return;
}