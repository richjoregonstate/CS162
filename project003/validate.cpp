/*
 * Program: N/A
 * Description: Validates user numerical input
 * Author: Jeevan Topgi
 * Date: Sat Apr 22 15:34:13 PDT 2017
 */

#include "validate.hpp"
#include <iostream>
#include <limits>
#include <string>

int validate(int min, int max)
{
    int numChoice;
    std::cin >> numChoice;

    //while number does not fail or is not between the range retry
    while(std::cin.fail() || (std::cin.peek()!='\r' && std::cin.peek()!='\n')
          || (numChoice<min || numChoice>max))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Invalid integer, try again: ";
        std::cin >> numChoice;
    }

    return numChoice;
}

double validate(double min, double max)
{
    double numChoice;
    std::cin >> numChoice;

    //while number does not fail or is not between the range retry
    while(std::cin.fail() || (std::cin.peek()!='\r' && std::cin.peek()!='\n')
          || (numChoice<min || numChoice>max))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Invalid double, try again: ";
        std::cin >> numChoice;
    }

    return numChoice;
}

std::string validate()
{
    std::string str;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::getline(std::cin,str);
    return str;
}
