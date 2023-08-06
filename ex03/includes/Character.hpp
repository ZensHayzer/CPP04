/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:55:58 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/05 22:48:09 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter	{
	public:
		Character();
		Character(std::string name);
		Character(Character const & src);
		~Character();

		Character	&operator=(Character const & src);
		virtual		std::string const & getName() const;
		virtual		void equip(AMateria* m);
		virtual		void unequip(int idx);
		virtual		void use(int idx, ICharacter& target);
		
		AMateria*	bag[4];
		
	private:
		std::string	_name;
		AMateria*	_ground[50];
};

#endif