/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:54:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 15:54:59 by ajeanne          ###   ########.fr       */
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
		Brain &operator=(const Brain & src);
		
		std::string	getIdea(int i) const;
		void	setIdea(int i, std::string str);
	
	private:
		std::string	_ideas[100];
};

#endif