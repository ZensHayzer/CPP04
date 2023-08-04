/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:28:15 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 12:56:37 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class Animal	{
	
	public:
		Animal();
		Animal(std::string type);
		Animal(std::string type, std::string sound);
		Animal(const Animal & src);
		
		virtual ~Animal();
		virtual Animal	&operator=(const Animal & src);
		virtual Brain	*getBrain() const = 0;
		
		std::string	getType() const;

		void	makeSound()	const;
		
	protected:
		std::string	_type;
		std::string	_sound;
};

#endif