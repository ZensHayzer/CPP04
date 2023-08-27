/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:15:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 16:51:45 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")	{
	std::cout << "You create a Cat !" << std::endl;
	
	return;
}

Cat::Cat(const Cat & src)	{
	std::cout << "You copied a Cat !" << std::endl;
	if (this != &src)
		*this = src;
	
	return;
}

Cat::~Cat()	{
	std::cout << "You deleted a Cat !" << std::endl;
	
	return;
}

Cat	&Cat::operator=(const Cat & src)	{
	if (this != &src)	{
		_type = src._type;
	}
	return (*this);
}

void	Cat::makeSound() const	{
	std::cout << "MIAOUUUUUUU" << std::endl;
	
	return;
}