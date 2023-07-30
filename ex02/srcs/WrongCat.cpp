/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:45:21 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/11 02:02:50 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")	{
	std::cout << "You create a WrongCat *g menti* !" << std::endl;
	
	return;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)	{
	std::cout << "You create a WrongCat *g menti* !" << std::endl;
	
	return;
}

WrongCat::WrongCat(const WrongCat & src): WrongAnimal(src.getType())	{
	std::cout << "You copied a WrongCat *g menti* !" << std::endl;
	
	return;
}

WrongCat::~WrongCat()	{
	std::cout << "You deleted a WrongCat *g menti* !" << std::endl;
	
	return;
}

void	WrongCat::makeSound() const	{
	std::cout << "MIAOUUUUUUUUUUU *g menti* !" << std::endl;
	
	return;
}