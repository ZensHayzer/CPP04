/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:16:18 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/03 13:35:14 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria	{
	public:
		Ice();
		Ice(Ice const & src);
		~Ice();

		Ice	&operator=(const Ice & src);
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif