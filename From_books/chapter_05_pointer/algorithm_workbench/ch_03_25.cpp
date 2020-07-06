/*
Look at the following array definition:

int set[10];

Write a statement using pointer notation that stores the value 99 in set[7];
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int set[10];

    int *ptr = &set[7];

    *ptr = 99;

    std::cout << set[7] << std::endl;

    return 0;
}
