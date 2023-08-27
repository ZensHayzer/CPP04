/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:33:28 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/27 17:40:41 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)	{
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
	petShop[1]->getBrain()->setIdea(0, "Mouais not really.");
	petShop[1]->getBrain()->setIdea(1, "Pretty sure i can eat this.");
	petShop[1]->getBrain()->setIdea(2, "Wow, what a cool place !");
	std::cout << "Pet number 1 idea 0 = " << petShop[1]->getBrain()->getIdea(0) << std::endl;
	std::cout << "Pet number 1 idea 1 = " << petShop[1]->getBrain()->getIdea(1) << std::endl;
	std::cout << "Pet number 1 idea 2 = " << petShop[1]->getBrain()->getIdea(2) << std::endl;
	std::cout << "\n" << petShop[6]->getType() << std::endl;
	petShop[6]->makeSound();
	petShop[6]->getBrain()->setIdea(0, "Miaou could be a cool thing ?");
	petShop[6]->getBrain()->setIdea(1, "Why am I here ?");
	petShop[6]->getBrain()->setIdea(2, "Hmm, I'm gonna be the king of the world.");
	std::cout << "Pet number 6 idea 0 = " << petShop[6]->getBrain()->getIdea(0) << std::endl;
	std::cout << "Pet number 6 idea 1 = " << petShop[6]->getBrain()->getIdea(1) << std::endl;
	std::cout << "Pet number 6 idea 2 = " << petShop[6]->getBrain()->getIdea(2) << std::endl;

	std::cout << "\nTests Maurice / Johnny\n" << std::endl;	
	std::cout << maurice->getType() << std::endl;
	maurice->makeSound();
	std::cout << johnny->getType() << std::endl;
	johnny->makeSound();

	std::cout << "\nTest Copy :" << std::endl;
	Dog	toto;
	toto.getBrain()->setIdea(15, "I have an Idea !");
	Dog titi = toto;
	std::cout << titi.getBrain()->getIdea(15) << std::endl;


	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)	{
		delete petShop[i];
	}

	delete maurice;
	delete johnny;
	
	return 0;
}