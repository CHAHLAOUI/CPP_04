
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "~~~~~~~~ REAL ANIMALS ~~~~~~~~" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    delete j;
    delete i;

    std::cout << "\n~~~~~~~~ WRONG ANIMALS ~~~~~~~~" << std::endl;
    const WrongAnimal* wrong = new WrongCat();
    std::cout << wrong->getType() << std::endl;
    wrong->makeSound(); 
    delete wrong;

    return 0;
}
