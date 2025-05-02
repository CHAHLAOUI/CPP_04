#include "Dog.hpp"
#include "Cat.hpp"

int main() {


    Cat a;
    Cat b(a);
    std::cout << "\n--- Sounds ---\n";

    Cat c(b);
    // const int size = 4;
    // const Animal* animals[size];

    // for (int i = 0; i < size; ++i) {
    //     if (i < size / 2)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    // }

    // for (int i = 0; i < size; ++i)
    //     animals[i]->makeSound();

    // std::cout << "\n--- Deleting animals ---\n";
    // for (int i = 0; i < size; ++i)
    //     delete animals[i];

    return 0;
}
