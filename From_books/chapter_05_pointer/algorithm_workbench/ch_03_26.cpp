/*
Write code that dynamically allocates an array of 20 integers, then use a loop to allow the user to enter
values for each element of the array.
*/
#include <iostream>

int main(int argc, char* argv[])
{
    int *arr = new int[20];

    for (int i=0; i<20; i++)
    {
        std::cin >> arr[i];
    }

    for (int i=0; i<20; i++)
    {
        std::cout << *(arr+i) << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
