/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:33:28 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 17:02:15 by ajeanne          ###   ########.fr       */
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

	std::cout << "Tests subject :" << std::endl;
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	const WrongCat* m = new WrongCat();

	std::cout << meta->getType() << std::endl;
	meta->makeSound(); 
	std::cout << j->getType() << std::endl;
	j->makeSound(); 
	std::cout << i->getType() << std::endl;
	i->makeSound(); 
	std::cout << k->getType() << std::endl;
	k->makeSound(); 
	std::cout << l->getType() << std::endl;
	l->makeSound(); 
	std::cout << m->getType() << std::endl;
	m->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete k;
	delete l;
	delete m;
	
	return 0;
}