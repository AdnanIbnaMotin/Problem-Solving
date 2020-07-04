/*
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.

Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 / 20 = 0.4, or 40 percent. The
percentage of females can be calculated as 12 / 20 = 0.6, or 60 percent.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int numberOfMale = 0;
    int numberOfFemale = 0;

    std::cout << "Enter total number of male in the class: ";
    std::cin >> numberOfMale;
    std::cout << "Enter total number of female in the class: ";
    std::cin >> numberOfFemale;

    float numberOfStudents = numberOfMale + numberOfFemale;

    std::cout << std::endl;
    std::cout << "The percentage of male is: " << (numberOfMale / numberOfStudents) * 100 << "%" << std::endl;
    std::cout << "The percentage of female is: " << (numberOfFemale / numberOfStudents) * 100 << "%" << std::endl;

    return 0;
}
