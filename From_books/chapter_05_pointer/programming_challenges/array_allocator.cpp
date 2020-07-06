/*
Write a function that dynamically allocates an array of integers. The function should accept an integer argument indicating
the number of elements to allocate. The function should return a pointer to the array.
*/

#include <iostream>

int* createArray(const int& num)
{
    int *arr = new int[num];

    std::cout << "Enter the element of array: " << std::endl;
    for (int i=0; i<num; i++)
    {
        std::cin >> arr[i];
    }

    return arr;
}

int main(int argc, char* argv[])
{
    int num = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> num;

    const int* ptr = createArray(num);

    for (int i=0; i<num; i++)
    {
        std::cout << *(ptr+i) << " ";
    }

    std::cout << std::endl;
    delete[] ptr;

    return 0;
}
