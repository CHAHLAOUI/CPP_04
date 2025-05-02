#include "Animal.hpp"

Animal::Animal() : Type("") 
{
    std::cout << "constructor Animal is called " << std::endl;
}

Animal::Animal(const Animal& obj) : Type(obj.getType()) 
{
    std::cout << "constructor copy Animal is called " << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->Type = obj.getType();
    return (*this);
 }

 Animal::~Animal() {}


 // make Sound()

 void Animal::makeSound() const 
 {
    std::cout << "les chats n’aboient pas" << std::endl;
 }
 
 std::string Animal::getType() const
 {
    return (Type);
 }