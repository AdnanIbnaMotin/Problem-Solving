/*
Looking at the following code:

double value = 29.7
double *ptr = &value;

Write a cout statement that use the ptr variable to display the content of the value variable.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    double value = 29.7;
    double *ptr = &value;

    std::cout << *ptr << std::endl;

    return 0;
}
