/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:15:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/11 01:19:54 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")	{
	std::cout << "You create a Cat !" << std::endl;
	
	return;
}

Cat::Cat(std::string type): Animal(type)	{
	std::cout << "You create a Cat !" << std::endl;
	
	return;
}

Cat::Cat(const Cat & src): Animal(src.getType())	{
	std::cout << "You copied a Cat !" << std::endl;
	
	return;
}

Cat::~Cat()	{
	std::cout << "You deleted a Cat !" << std::endl;
	
	return;
}

void	Cat::makeSound() const	{
	std::cout << "MIAOUUUUUUUUUUU !" << std::endl;
	
	return;
}