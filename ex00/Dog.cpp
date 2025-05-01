/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:43:39 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/01 21:17:04 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() 
{
    std::cout << "constructor de Dog" << std::endl;
    Type = "Dog";
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog constructor de copy " << std::endl;
}

Dog& Dog::operator=(const Dog& obj) 
{
    Animal::operator=(obj);
    return (*this);
}


Dog::~Dog()
{
	std::cout << "Destructed de Dog "<< std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Haaaaaaaaaaaaw" << std::endl;
}