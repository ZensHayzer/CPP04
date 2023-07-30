/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:15:20 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 10:23:31 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal	{
	
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat & src);
		~Cat();

		Brain	*getBrain() const;

		void	makeSound()	const;
	
	private:
		Brain	*_brain;

};

#endif