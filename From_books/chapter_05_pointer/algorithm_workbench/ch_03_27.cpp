/*
Assume tempNumber is a pointer that points to a dynamically allocated array. Write code that releases that memory used by
the array.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int *tempNumber = new int[10];

    delete[] tempNumber;

    std::cout << "Memory releases" << std::endl;

    return 0;
}
