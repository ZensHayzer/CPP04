/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:44:51 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 12:37:32 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Urluberlue")	{
	std::cout << "You created an WrongAnimal *g menti* !" << std::endl;

	return;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)	{
	std::cout << "You created an WrongAnimal *g menti* !" << std::endl;
	
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)	{
	std::cout << "You copied an WrongAnimal *g menti* !" << std::endl;
	*this = src;

	return;
}

WrongAnimal::~WrongAnimal()	{
	std::cout << "You deleted an WrongAnimal *g menti* !" << std::endl;
	
	return;
}

std::string	WrongAnimal::getType() const	{
	return _type;
}

void	WrongAnimal::makeSound() const	{
	std::cout << _sound << std::endl;
	
	return;
}