/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:17:41 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/03 06:44:01 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    Type = "Cat";
    brain = new Brain();
    std::cout << "constructor de Cat  est appel" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    brain = new Brain(*obj.brain);
    std::cout << "Cat copy constructor\n";
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
    {
        Animal::operator=(obj);
        delete brain;
        brain = new Brain(*obj.brain);
    }
    std::cout << "Cat assignment operator\n";
    return (*this);
}
 
Cat::~Cat() 
{
    delete brain;
    std::cout << "Cat destructor\n";
}
 
void Cat::makeSound() const
{
    std::cout << "Miiiiiiw\n";
}