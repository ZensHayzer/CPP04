/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/11 01:19:43 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(std::string type): Animal(type)	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(const Dog & src): Animal(src.getType())	{
	std::cout << "You copied a dog !" << std::endl;
	
	return;
}

Dog::~Dog()	{
	std::cout << "You deleted a dog !" << std::endl;
	
	return;
}

void	Dog::makeSound() const	{
	std::cout << "WOUUUUUUUUUUUAF !" << std::endl;
	
	return;
}