/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:31:42 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/05 22:15:19 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")	{
	
}

Ice::Ice(Ice const & src)	{
	*this = src;
}

Ice::~Ice()	{
	
}

Ice	&Ice::operator=(const Ice & src)	{
	_type = src._type;

	return (*this);
}

AMateria*	Ice::clone() const	{
	return (new Ice());
}

void	Ice::use(ICharacter& target)	{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}