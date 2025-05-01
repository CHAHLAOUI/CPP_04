/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:11:03 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/01 21:16:51 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
    std::cout << "constructor de Cat appel" << std::endl;
    Type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    std::cout << "constructor de copy est appel" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) 
{
    Animal::operator=(obj);
    return (*this);
}


Cat::~Cat()
{
	std::cout << "Destructed de Cat "<< std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miiiiiiiiiiw" << std::endl;
}