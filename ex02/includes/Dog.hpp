/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:14 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/03 12:55:35 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal	{
	
	public:
		Dog();
		Dog(const Dog & src);
		~Dog();
		
		Dog &operator=(const Dog & src);

		virtual Brain	*getBrain() const;
		
	private:
		Brain	*_brain;
		
};

#endif