/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:43:30 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 11:36:29 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal	{
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(std::string type, std::string sound);
		WrongAnimal(const WrongAnimal & src);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal & src);
		
		std::string	getType() const;

		void	makeSound()	const;
		
	protected:
		std::string	_type;
		std::string _sound;
};


#endif