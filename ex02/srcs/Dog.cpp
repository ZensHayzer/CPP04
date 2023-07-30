/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/28 10:25:07 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain())	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(std::string type): Animal(type), _brain(new Brain())	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(const Dog & src): Animal(src.getType()), _brain(src.getBrain())	{
	std::cout << "You copied a dog !" << std::endl;
	
	return;
}

Dog::~Dog()	{
	delete _brain;
	std::cout << "You deleted a dog !" << std::endl;
	
	return;
}

Brain	*Dog::getBrain() const	{
	return _brain;
}

void	Dog::makeSound() const	{
	std::cout << "WOUUUUUUUUUUUAF !" << std::endl;
	
	return;
}