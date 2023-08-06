/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:21:23 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/04 18:52:56 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        ~MateriaSource();

        MateriaSource       &operator=(MateriaSource const & src);

        virtual void        learnMateria(AMateria*);
        virtual AMateria*   createMateria(std::string const & type);

        AMateria*           materia[4];
};

#endif