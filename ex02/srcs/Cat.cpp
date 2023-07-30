/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:15:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/28 10:24:53 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())	{
	std::cout << "You create a Cat !" << std::endl;
	
	return;
}

Cat::Cat(std::string type): Animal(type), _brain(new Brain())	{
	std::cout << "You create a Cat !" << std::endl;
	
	return;
}

Cat::Cat(const Cat & src): Animal(src.getType()), _brain(src.getBrain())	{
	std::cout << "You copied a Cat !" << std::endl;
	
	return;
}

Cat::~Cat()	{
	delete _brain;
	std::cout << "You deleted a Cat !" << std::endl;
	
	return;
}

Brain	*Cat::getBrain() const	{
	return _brain;
}

void	Cat::makeSound() const	{
	std::cout << "MIAOUUUUUUUUUUU !" << std::endl;
	
	return;
}