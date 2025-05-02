/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 06:58:20 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/02 06:58:21 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    Type = "Dog";
    brain = new Brain();
    std::cout << "constructor Dog  est appel" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    brain = new Brain(*obj.brain);
    std::cout << "constructor de copy Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
        delete brain;
        brain = new Brain(*obj.brain);
    }
    std::cout << "Dog assignment operator\n";
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "destructor Dog " << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof\n";
}