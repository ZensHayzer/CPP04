/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:45:21 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 12:40:20 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat", "MIAOUCHHHHHHH*menti*")	{
	std::cout << "You create a WrongCat *g menti* !" << std::endl;
	
	return;
}

WrongCat::WrongCat(const WrongCat & src)	{
	std::cout << "You copied a WrongCat *g menti* !" << std::endl;
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
		_sound = src._sound;
	}
	return (*this);
}