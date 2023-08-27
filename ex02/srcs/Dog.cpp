/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 17:26:48 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain())	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(const Dog & src)	{
	std::cout << "You copied a dog !" << std::endl;
	if (this != &src)	{
		_type = src._type;
		_brain = new Brain(*src._brain);
	}
	
	return;
}

Dog::~Dog()	{
	delete _brain;
	std::cout << "You deleted a dog !" << std::endl;
	
	return;
}

Dog	&Dog::operator=(const Dog & src)	{
	std::cout << "Dog to Dog" << std::endl;
	if (this != &src)	{
		_type = src._type;
		*_brain = *src._brain;
	}
	return (*this);
}

Animal	&Dog::operator=(const Animal & src)	{
	std::cout << "Dog to Animal" << std::endl;
	_type = src.getType();
	*_brain = *src.getBrain();
	
	return (*this);
}

Brain	*Dog::getBrain() const	{
	return _brain;
}

void	Dog::makeSound() const	{
	std::cout << "WOUAFFFFFFF" << std::endl;
	
	return;
}