/*
The date June 10, 1960 is special because when we write it in the following format, the month times the day equals the year

    6/10/60

Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year. The program should then
determine whether the month times the day is equal to the year. If so, it should display a message saying the date is magic.
Otherwise, it should display a message saying the date is not magic.
*/
#include <iostream>

int main(int argc, char* argv[])
{
    int month = 0, date = 0, twoDigitYear = 0;

    std::cout << "Enter a month: ";
    std::cin >> month;

    std::cout << "Enter a date: ";
    std::cin >> date;

    std::cout << "Enter years only last two-digits: ";
    std::cin >> twoDigitYear;

    if ((month * date) == twoDigitYear)
    {
        std::cout << "The date is magic" << std::endl;
    }
    else
    {
        std::cout << "The date is not magic" << std::endl;
    }
    return 0;
}
