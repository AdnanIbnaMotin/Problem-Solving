/*
 * Write a program that asks the user to enter a golfer's score
 * for three games of golf, and then displays the average of the three scores.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float sum = 0;
    float score = 0;

    for (int i=1; i<=3; i++)
    {
        std::cout << i << " Golf game score is: ";
        std::cin >> score;
        sum += score;
    }
    std::cout << "Average of the three golf game scores: " << sum/3 << std::endl;

    return 0;
}
