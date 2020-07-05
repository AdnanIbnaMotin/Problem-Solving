/*
Write a program that asks for the names of three runners and the time it took each of them to finish a race.
The program should display who came in first, second, and third place.
Input Validation: Only accept positive number of the times.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int firstRunnerTime = 0, secondRunnerTime = 0, thirdRunnerTime = 0;

    std::cout << "Enter first runner time: ";
    std::cin >> firstRunnerTime;

    std::cout << "Enter second runner time: ";
    std::cin >> secondRunnerTime;

    std::cout << "Enter third runner time: ";
    std::cin >> thirdRunnerTime;

    if (firstRunnerTime < secondRunnerTime && firstRunnerTime < thirdRunnerTime)
    {
        std::cout << "First runner came first place" << std::endl;
        if (secondRunnerTime > thirdRunnerTime)
        {
            std::cout << "Third runner came second place" << std::endl;
            std::cout << "Second runner came third place" << std::endl;
        }
        else
        {
            std::cout << "Second runner came second place" << std::endl;
            std::cout << "Third runner came third place" << std::endl;
        }
    }
    else if (firstRunnerTime > secondRunnerTime && thirdRunnerTime > secondRunnerTime)
    {
        std::cout << "Second runner came first place" << std::endl;
        if (firstRunnerTime < thirdRunnerTime)
        {
            std::cout << "First runner came second place" << std::endl;
            std::cout << "Third runner came third place" << std::endl;
        }
        else
        {
            std::cout << "Third runner came second place" << std::endl;
            std::cout << "First runner came third place" << std::endl;
        }
    }
    else if (thirdRunnerTime < secondRunnerTime && firstRunnerTime > thirdRunnerTime)
    {
        std::cout << "Third runner came first place" << std::endl;
        if (secondRunnerTime > firstRunnerTime)
        {
            std::cout << "First runner came second place" << std::endl;
            std::cout << "Second runner came third place" << std::endl;
        }
        else
        {
            std::cout << "Second runner came second place" << std::endl;
            std::cout << "First runner came third place" << std::endl;
        }
    }

    return 0;
}
