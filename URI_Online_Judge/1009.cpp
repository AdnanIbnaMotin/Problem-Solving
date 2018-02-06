#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string name;
    double salary, sold;

    cin >> name >> salary >> sold;

    printf("TOTAL = R$ %0.2f\n", salary + (sold * 15) / 100);
    return 0;
}
