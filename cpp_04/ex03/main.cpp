/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:15:44 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 22:49:47 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
    // Create MateriaSource and learn basic Materias
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Create Character, equip Materias, and use them
    ICharacter* me = new Character("me");
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    // Clean up
    delete bob;
    delete me;
    delete src;

    // Quick test of deep copy and equip Materias
    Character* alice = new Character("Alice");
    Character* aliceCopy = new Character(*alice);
    delete alice;
    delete aliceCopy;

    return 0;
}

