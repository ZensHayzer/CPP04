/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/30 10:18:31 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog", "WOUAFFFFFFF"), _brain(new Brain())	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(const Dog & src)	{
	std::cout << "You copied a dog !" << std::endl;
	*this = src;
	
	return;
}

Dog::~Dog()	{
	delete _brain;
	std::cout << "You deleted a dog !" << std::endl;
	
	return;
}

Dog	&Dog::operator=(const Dog & src)	{
	if (this != &src)	{
		_type = src._type;
		_brain = src.getBrain();
	}
	return (*this);
}

Brain	*Dog::getBrain() const	{
	return _brain;
}