/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:12:19 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/05 22:20:43 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		
		AMateria	&operator=(const AMateria & src);
		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};

#endif