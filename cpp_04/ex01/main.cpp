/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:18:34 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 22:54:07 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
    // Constructing Animals
    const Animal *meta[2];
    meta[0] = new Dog();
    meta[1] = new Cat();
    if (!meta[0] || !meta[1]) {
        std::cout << "Allocation failed" << std::endl;
        return (1);
    }

    // Testing Animals
    for (int i = 0; i < 2; ++i) {
        std::cout << "Animal type: " << meta[i]->getType() << std::endl;
        meta[i]->makeSound();
    }

    // Deconstructing Animals
    delete meta[0];
    delete meta[1];

    // Deep Copy Test
    Dog *a = new Dog();
    if (!a) {
        std::cout << "Allocation failed" << std::endl;
        return(1);
    }
    a->setIdea(0, "I have to sniff it");

    Dog *b = new Dog(*a);
    delete a;

    std::cout << "Ideas of Dog b:" << std::endl;
    b->getIdeas();
    delete b;

    return 0;
}
