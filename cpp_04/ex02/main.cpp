/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:18:34 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 22:46:19 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    // Construct Animal objects
    std::cout << "\033[34mConstructing Animals\033[0m" << std::endl;
    const Animal *meta[10];
    for (int i = 0; i < 10; ++i)
	{
		if (i % 2)
			meta[i] = new Cat();
		else
         	meta[i] = new Dog();
        if (!meta[i]) {
            perror("Allocation failed");
            exit(1);
        }
    }

    // Test Animals
    std::cout << "\n\033[34mTesting Animals\033[0m" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Animal type: " << meta[i]->getType() << std::endl;
        meta[i]->makeSound();
    }

    // Clean up
    std::cout << "\n\033[34mDeconstructing Animals\033[0m" << std::endl;
    for (int i = 0; i < 10; ++i) {
        delete meta[i];
    }

    // Deep Copy Test
    std::cout << "\n\n#### Deep Copy Test ####\n" << std::endl;
    Dog *a = new Dog();
    if (!a) {
        perror("Allocation failed");
        exit(1);
    }

    a->setIdea(0, "Sniff it");
    a->setIdea(1, "Pee on it");
    a->setIdea(2, "Sniff it again");

    Dog *b = new Dog(*a);
    if (!b) {
        perror("Allocation failed");
        exit(1);
    }

    std::cout << "\n\033[34mTesting a\033[0m\nIdeas of Dog a:" << std::endl;
    a->getIdeas();

    delete a;

    std::cout << "\n\033[34mTesting b\033[0m\nIdeas of Dog b:" << std::endl;
    b->getIdeas();

    delete b;
    return 0;
}
