/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:59:09 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/05 22:16:57 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")	{
	
}

AMateria::AMateria(std::string const & type) : _type(type)	{
	
}

AMateria::~AMateria()	{
	
}

AMateria	&AMateria::operator=(const AMateria & src)	{
	_type = src._type;
	
	return (*this);
}

std::string const & AMateria::getType() const	{
	return _type;
}

void	AMateria::use(ICharacter& target)	{
	(void)target;
}