/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:48:14 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 10:23:11 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal	{
	
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog & src);
		~Dog();

		Brain	*getBrain() const;
		
		void	makeSound()	const;
	private:
		Brain	*_brain;
		
};

#endif