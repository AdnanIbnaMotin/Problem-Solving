/*
Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12)
and the year. The program should then display the number of days in that month. Use the following criteria to identify
leap years:

1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400.
For example, 2000 is a leap year but 2100 is not.

2. If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4. For example 2008 is a
leap year but 2009 is not.
*/

#include <iostream>
#include <array>

int main(int argc, char* argv[])
{
    std::array<int, 12> days = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthNum = 0;
    int yearNum = 0;

    std::cout << "Enter the month of the year (1 through 12): ";
    std::cin >> monthNum;

    std::cout << "Enter the year number: ";
    std::cin >> yearNum;

    if (yearNum % 100 == 0 && yearNum % 400 == 0)
    {
        days[1]++;
    }
    else if (yearNum % 100 != 0 && yearNum % 4 == 0)
    {
        days[1]++;
    }

    std::cout << days[monthNum-1] << " days" << std::endl;

    return 0;
}
