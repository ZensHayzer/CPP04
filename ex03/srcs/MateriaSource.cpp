/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:46:27 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/06 02:42:54 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()  {
    for (int i = 0; i < 4; i++)	{
		materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    *this = src;
}

MateriaSource::~MateriaSource()    {
    for (int i = 0; i < 4; i++)	{
        if (materia[i])
		    delete materia[i];
	}
}

MateriaSource   &MateriaSource::operator=(MateriaSource const & src)    {
    for(int i = 0; i < 4; i++)  {
        materia[i] = src.materia[i];
    }

    return (*this);
}

void            MateriaSource::learnMateria(AMateria* src)  {
    for (int i = 0; i < 4; i++) {
        if (!materia[i])    {
            materia[i] = src->clone();
            break;
        }
    }
    delete src;
}

AMateria    *MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materia[i] && materia[i]->getType() == type)    {
            return (materia[i]->clone());
        }
    }
    
    return NULL;
}