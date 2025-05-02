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
    if (this != &obj) {
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
    std::cout << "Meow\n";
}
