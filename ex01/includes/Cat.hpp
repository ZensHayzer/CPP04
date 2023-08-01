/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:15:20 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/30 10:24:00 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal	{
	
	public:
		Cat();
		Cat(const Cat & src);
		~Cat();
		
		Cat &operator=(const Cat & src);
		// virtual Animal &operator=(const Animal & src);
		
		virtual Brain	*getBrain() const;

	private:
		Brain	*_brain;

};

#endif