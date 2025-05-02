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