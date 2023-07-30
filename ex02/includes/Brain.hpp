/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:54:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/11 18:42:53 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain	{
	
	public:
		Brain();
		Brain(const Brain & src);
		~Brain();

		std::string getIdeas(int i) const;

	private:
		std::string	_ideas[100];
};

#endif