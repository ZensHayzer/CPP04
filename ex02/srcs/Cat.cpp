/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:15:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/03 14:07:08 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat", "MIAOUUUUUUU"), _brain(new Brain())	{
	std::cout << "You create a Cat !" << std::endl;
	
	return;
}

Cat::Cat(const Cat & src)	{
	std::cout << "You copied a Cat !" << std::endl;
	*this = src;
	
	return;
}

Cat::~Cat()	{
	delete _brain;
	std::cout << "You deleted a Cat !" << std::endl;
	
	return;
}

Cat	&Cat::operator=(const Cat & src)	{
	if (this != &src)	{
		_type = src._type;
		_brain = src.getBrain();
	}
	return (*this);
}

Brain	*Cat::getBrain() const	{
	return _brain;
}
