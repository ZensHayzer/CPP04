/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:16:01 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/03 14:41:28 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : _name("Robert")	{
	
}

Character::Character(std::string name) : _name(name)	{
	
}

Character::Character(Character const & src)	{
	*this = src;
}

Character::~Character()	{
	
}

Character	&Character::operator=(Character const & src)	{
	_name = src.getName();
	for (int i = 0; i < 4; i++)	{
		if (src.bag[i] && src.bag[i]->getType() == "ice")	{
			bag[i] = new Ice();
			for (int j = 0; j < 50; j++)	{
				if (!_ground[j])	{
					_ground[j] = bag[i];
					break;
				}
			}
		}
		else if (src.bag[i] && src.bag[i]->getType() == "cure")	{
			bag[i] = new Cure();
			for (int j = 0; j < 50; j++)	{
				if (!_ground[j])	{
					_ground[j] = bag[i];
					break;
				}
			}
		}
	}
}

std::string	const & Character::getName() const	{
	return _name;
}

void	Character::equip(AMateria* m)	{
	for (int i = 0; i < 4; i++)	{
		if (!bag[i])	{
			bag[i] = m;
			for (int j = 0; j < 50; j++)	{
				if (!_ground[j])	{
					_ground[j] = bag[i];
					break;
				}
			}
			break;
		}
	}
}

void	