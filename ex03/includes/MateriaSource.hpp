/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:21:23 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/06 02:27:09 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

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