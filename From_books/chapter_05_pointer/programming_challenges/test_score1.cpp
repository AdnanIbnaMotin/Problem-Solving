/*
Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. Once
all the scores are entered, the array should be passed to a function that sorts them in ascending order. Another function
should be called that calculates the average score. The program should display the sorted list of scores and averages with
appropriate headings. Use pointer notation rather than array notation whenever possible.

Input Validation: Do not accept negative number for test scores.
*/

#include <iostream>
#include <algorithm>

#define ll long long


void arraySortedAsc(ll* arr, const int& num)
{
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++)
        {
            if (arr[i] < arr[j])
                std::swap(arr[j], arr[i]);
        }
    }
}

ll* createArray(const int& num)
{
    ll* arr = new ll[num];

    std::cout << "Enter the test score: " << std::endl;
    for (int i=0; i<num; i++)
    {
        std::cin >> arr[i];
    }

    arraySortedAsc(arr, num);
    return arr;
}

float getAvg(const int& sum, const int& num)
{
    return static_cast<float>(sum) / num;
}

int printArray(const ll* arr, const int& num)
{
    int sum = 0;

    std::cout << "Test score sorted in ascending order: " << std::endl;
    for (int i=0; i<num; i++)
    {
        sum += arr[i];
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return sum;
}

int main(int argc, char* argv[])
{
    ll num;

    std::cout << "Enter the size of the array: ";
    std::cin >> num;

    ll* arr = createArray(num);
    int sum = printArray(arr, num);
    float avg = getAvg(sum, num);

    std::cout << "Average test score: " << avg << std::endl;
    delete[] arr;

    return 0;
}
