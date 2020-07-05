/*
The colors red, blue, and yellow are known as primary colors because they cannot be made by mixing other colors. When you mix two
primary colors, you get a secondary color, as show here.

When you mix red and blue, you get purple.
When you mix red and yellow, you get orange.
When you mix blue and yellow, you get green.

Write a program that prompts the user to enter the names of two primary colors to mix. If the user enters anything other than "red",
"blue", or "yellow", the program should display an error message. Otherwise the program should display the name of the secondary color
that results by mixing two primary colors.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    std::string colorOne = "", colorTwo = "";

    std::cout << "Enter a color name: ";
    std::cin >> colorOne;
    std::cout << "Enter second color name: ";
    std::cin >> colorTwo;

    if (colorOne == "red" && colorTwo == "blue")
    {
        std::cout << "Purple" << std::endl;
    }
    else if (colorOne == "red" && colorTwo == "yellow")
    {
        std::cout << "Orange" << std::endl;
    }
    else if (colorOne == "blue" && colorTwo == "yellow")
    {
        std::cout << "Green" << std::endl;
    }
    else
    {
        std::cout << "Please enter a valid color name: (red, green, blue)" << std::endl;
    }

    return 0;
}
