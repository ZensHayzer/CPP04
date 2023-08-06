/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:52:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/05 22:29:11 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria	{
	public:
		Cure();
		Cure(Cure const & src);
		~Cure();

		Cure	&operator=(const Cure & src);
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif