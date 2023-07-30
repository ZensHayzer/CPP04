/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 01:44:17 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/29 12:18:12 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal	{
	
	public:
		WrongCat();
		WrongCat(const WrongCat & src);
		~WrongCat();
		WrongCat &operator=(const WrongCat & src);
};

#endif