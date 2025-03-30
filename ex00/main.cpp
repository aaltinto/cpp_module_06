#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Need one argument for convertion" << std::endl;
        return 1;
    }
    std::string input(av[1]);
    ScalarConverter::convert(input);
}