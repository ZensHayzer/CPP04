/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:46:27 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/05 21:55:47 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()  {
    
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    *this = src;
}

MateriaSource::~MateriaSource()    {
    
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
}

AMateria    *MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materia[i] && materia[i]->getType() == type)    {
            return (materia[i]->clone());
        }
    }
    
    return NULL;
}