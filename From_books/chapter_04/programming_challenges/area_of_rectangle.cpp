/*
The are of a rectangle is the rectangle's length times its width. Write a program that asks for the length and width of two
rectangles. The program should tell the user which rectangle has the greater area, or if the ares are the same.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float len1 = 0, len2 = 0, wid1 = 0, wid2 = 0;

    std::cout << "Rectangle One: " << std::endl;
    std::cout << "Enter length: ";
    std::cin >> len1;
    std::cout << "Enter width: ";
    std::cin >> wid1;

    std::cout << std::endl << "Rectangle Two: " << std::endl;
    std::cout << "Enter length: ";
    std::cin >> len2;
    std::cout << "Enter width: ";
    std::cin >> wid2;

    float area1 = len1 * wid1;
    float area2 = len2 * wid2;

    std::cout << std::endl;
    if (area1 > area2)
    {
        std::cout << "Rectangle one has the greater area." << std::endl;
    }
    else if (area1 < area2)
    {
        std::cout << "Rectangle two has the greater area." << std::endl;
    }
    else
    {
        std::cout << "Area of the both rectangle are same." << std::endl;
    }

    return 0;
}
