/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 00:49:26 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/02 00:49:56 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Wron_type("Unknown")
{
	std::cout << "constructed de WrongAnimal " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
                             : Wron_type(obj.getType()) {}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
		Wron_type = obj.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed\n";
}

std::string WrongAnimal::getType() const
{
	return (Wron_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Pas son" <<  std::endl; 
}