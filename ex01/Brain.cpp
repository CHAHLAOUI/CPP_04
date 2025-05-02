#include "Brain.hpp"


Brain::Brain() {
    std::cout << "constructor de Brain  " << std::endl;
    for (size_t i = 0; i < 100; ++i)
        ideas[i] = "idea";
}



Brain::Brain(const Brain& obj)
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << "--------  " << ideas[i] << "----" << obj.ideas[i] << std::endl;
        ideas[i] = obj.ideas[i];

    }
    std::cout << " copy constructor de Brain" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj) {
        for (int i = 0; i < 100; i++)
            ideas[i] = obj.ideas[i];
    }
    std::cout << "Brain assignment operator\n";
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain destructor\n";
}
