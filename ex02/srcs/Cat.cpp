/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:15:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 17:30:21 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())	{
	std::cout << "You create a Cat !" << std::endl;
	
	return;
}

Cat::Cat(const Cat & src)	{
	std::cout << "You copied a Cat !" << std::endl;
	if (this != &src)	{
		_type = src._type;
		_brain = new Brain(*src._brain);
	}
	
	return;
}

Cat::~Cat()	{
	delete _brain;
	std::cout << "You deleted a Cat !" << std::endl;
	
	return;
}

Cat	&Cat::operator=(const Cat & src)	{
	std::cout << "Cat to Cat" << std::endl;
	if (this != &src)	{
		_type = src._type;
		*_brain = *src._brain;
	}
	return (*this);
}

Animal	&Cat::operator=(const Animal & src)	{
	std::cout << "Cat to Animal" << std::endl;
	_type = src.getType();
	*_brain = *src.getBrain();
	
	return (*this);
}

Brain	*Cat::getBrain() const	{
	return _brain;
}

void	Cat::makeSound() const	{
	std::cout << "MIAOUUUUUUU" << std::endl;
	
	return;
}