/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:28:15 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 16:54:41 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal	{
	
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal & src);
		virtual ~Animal();
		Animal &operator=(const Animal & src);
		
		std::string	getType() const;

		virtual void	makeSound()	const;
		
	protected:
		std::string	_type;
};

#endif