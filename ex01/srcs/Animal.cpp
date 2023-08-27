/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:36:40 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 17:05:37 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Urluberlue")	{
	std::cout << "You created an animal !" << std::endl;

	return;
}

Animal::Animal(std::string type): _type(type)	{
	std::cout << "You created an animal !" << std::endl;
	
	return;
}

Animal::Animal(const Animal & src)	{
	std::cout << "You copied an animal !" << std::endl;
	if (this != &src)
		*this = src;

	return;
}

Animal::~Animal()	{
	std::cout << "You deleted an animal !" << std::endl;
	
	return;
}

Animal	&Animal::operator=(const Animal & src)	{
	if (this != &src)
		_type = src.getType();
	return (*this);
}

std::string	Animal::getType() const	{
	return _type;
}

void	Animal::makeSound() const	{
	std::cout << "This \"thing\" don't really talk that much ..." << std::endl;
	
	return;
}