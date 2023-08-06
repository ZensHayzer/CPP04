/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:16:01 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/06 02:59:46 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : _name("Robert")	{
	for (int i = 0; i < 4; i++)	{
		bag[i] = NULL;
	}
	
	for (int i = 0; i < 50; i++)	{
		_ground[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name)	{
	for (int i = 0; i < 4; i++)	{
		bag[i] = NULL;
	}
	
	for (int i = 0; i < 50; i++)	{
		_ground[i] = NULL;
	}
}

Character::Character(Character const & src)	{
	*this = src;
}

Character::~Character()	{
	for (int i = 0; i < 50; i++)	{
		if (_ground[i])
			delete _ground[i];
	}
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

	return (*this);
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
			return;
		}
	}
	for (int j = 0; j < 50; j++)	{
				if (!_ground[j])	{
					_ground[j] = m;
					break;
				}
		}
}

void	Character::unequip(int idx)	{
	if (idx >= 0 && idx < 4)	{
		if (bag[idx])	{
			bag[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter& target)	{
	if (idx >= 0 && idx < 4)	{
		if (bag[idx])	{
			bag[idx]->use(target);
		}
	}
}

void    Character::printInventory(void)
{
    std::cout << _name << " - Inventory : " << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (bag[i])
            std::cout << "[" << i << "]" << bag[i]->getType() << std::endl; 
    }
    std::cout << "Floor : " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        if (_ground[i])
            std::cout << "[" << i << "]" << _ground[i]->getType() << std::endl; 
    }
    std::cout << std::endl;
}