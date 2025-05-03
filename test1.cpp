#include <iostream>

int main()
{
    int *p = new int;

    *p = 10;
    std::string *s = new std::string;
    *s = "chahlaoui";
    std::cout << *p << std::endl;
    std::cout << *s << std::endl;


    // std::cout << x << std::endl;
}