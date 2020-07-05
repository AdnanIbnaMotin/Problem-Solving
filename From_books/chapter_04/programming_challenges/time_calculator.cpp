/*
Write a program that asks the user to enter a number of seconds.

There are 60 seconds in a minute. If the number of seconds entered by the user is greater than or equal to 60, the program
should display the number of minutes in that many seconds.

There are 3,600 seconds in an hour. If the number of seconds entered by the user is greater than or equal to 3,600, the program
should display the number of hours in that many seconds.

There are 86,400 seconds in a day. If the number of seconds entered by the user is greater than or equal to 86,400, the program
should display the number of days in that many seconds.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float seconds = 0.0f;

    std::cout << "Enter a number of seconds: ";
    std::cin >> seconds;

    std::cout << std::fixed << std::setprecision(0);
    if (seconds < 60)
    {
        std::cout << seconds  << " seconds" << std::endl;
    }
    else if (seconds >= 60 && seconds < 3'600)
    {
        std::cout << seconds / 60 << " minutes" << std::endl;
    }
    else if (seconds >= 3'600 && seconds < 86'400)
    {
        std::cout << seconds / 3'600 << " hours" << std::endl;
    }
    else if (seconds >= 86'400)
    {
        std::cout << seconds / 86'400 << " days" << std::endl;
    }

    return 0;
}
