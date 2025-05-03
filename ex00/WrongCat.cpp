/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 03:21:18 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/03 03:21:19 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "constructed WrongCat " << std::endl;
	Wron_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj)
                         : WrongAnimal(obj) {}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	WrongAnimal::operator=(obj);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "destructed de WrongCat " << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WronCat     maaaaaaaiw " << std::endl;
}