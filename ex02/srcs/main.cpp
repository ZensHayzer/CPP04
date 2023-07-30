/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:33:28 by ajeanne           #+#    #+#             */
/*   Updated: 2023/07/28 12:31:00 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)	{
	Animal			manu("Rat");
	Dog				shanley;
	Cat				clem;
	WrongAnimal		fabrice("Dindonus Tirectus");
	WrongCat		jose;
	Animal			*petShop[10];
	const Animal		*johnny;
	const Animal		*maurice;
	
	johnny = new Dog();
	maurice = new Cat();
	
	for (int i = 0; i < 5; i++)	{
		petShop[i] = new Dog();
	}
	
	for (int i = 5; i < 10; i++)	{
		petShop[i] = new Cat();
	}
	
	std::cout << "\nTests petShop\n" << std::endl;
	std::cout << petShop[1]->getType() << std::endl;
	petShop[1]->makeSound();
	std::cout << petShop[6]->getType() << std::endl;
	petShop[6]->makeSound();

	std::cout << "\nTests Maurice / Johnny\n" << std::endl;	
	std::cout << maurice->getType() << std::endl;
	maurice->makeSound();
	std::cout << johnny->getType() << std::endl;
	johnny->makeSound();
	
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
	
	for (int i = 0; i < 10; i++)	{
		delete petShop[i];
	}

	delete maurice;
	delete johnny;
	
	return 0;
}