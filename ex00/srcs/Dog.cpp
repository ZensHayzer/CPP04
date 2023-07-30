/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 12:34:23 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog", "WOUAFFFFFFF")	{
	std::cout << "You create a dog !" << std::endl;
	
	return;
}

Dog::Dog(const Dog & src)	{
	std::cout << "You copied a dog !" << std::endl;
	*this = src;
	
	return;
}

Dog::~Dog()	{
	std::cout << "You deleted a dog !" << std::endl;
	
	return;
}

Dog	&Dog::operator=(const Dog & src)	{
	if (this != &src)	{
		_type = src._type;
		_sound = src._sound;
	}
	return (*this);
}
