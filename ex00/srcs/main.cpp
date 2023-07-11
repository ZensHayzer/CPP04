/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:33:28 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/11 15:50:10 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)	{
	Animal	manu("Rat");
	Dog		shanley;
	Cat		clem;
	WrongAnimal	fabrice("Dindonus Tirectus");
	WrongCat	jose;
	
	std::cout << "\nReal animals : Animal / Dog / Cat\n" << std::endl;
	std::cout << manu.getType() << std::endl;
	std::cout << shanley.getType() << std::endl;
	std::cout << clem.getType() << std::endl;

	std::cout << "\nWrong animals : Animal / Cat\n" << std::endl;
	std::cout << fabrice.getType() << std::endl;
	std::cout << jose.getType() << std::endl;
	
	std::cout << "\nAnimals are making sounds : Animal / Dog / Cat / Wrong Animal / Wrong Cat\n" << std::endl;
	manu.makeSound();
	shanley.makeSound();
	clem.makeSound();
	fabrice.makeSound();
	jose.makeSound();

	std::cout << std::endl;
	
	return 0;
}