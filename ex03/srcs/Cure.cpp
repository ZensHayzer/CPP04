/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:50:43 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/03 13:54:54 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")	{
	
}

Cure::Cure(Cure const & src)	{
	*this = src;
}

Cure::~Cure()	{
	
}

Cure	&Cure::operator=(const Cure & src)	{
	_type = src._type;

	return (*this);
}

AMateria*	Cure::clone() const	{
	return (new Cure());
}

void	Cure::use(ICharacter& target)	{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}