/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:45:21 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 17:10:03 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")	{
	std::cout << "You create a WrongCat *g menti* !" << std::endl;
	
	return;
}

WrongCat::WrongCat(const WrongCat & src)	{
	std::cout << "You copied a WrongCat *g menti* !" << std::endl;
	if (this != &src)
		*this = src;
	
	return;
}

WrongCat::~WrongCat()	{
	std::cout << "You deleted a WrongCat *g menti* !" << std::endl;
	
	return;
}

WrongCat	&WrongCat::operator=(const WrongCat & src)	{
	if (this != &src)	{
		_type = src._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const	{
	std::cout << "MIAOUUUUUUUUUUU *g menti* !" << std::endl;
	
	return;
}