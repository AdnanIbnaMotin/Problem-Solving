#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int age, c = 0;
    float sum = 0;
    while(true){
        cin >> age;
        if (age < 0) break;
        sum += age;
        c++;
    }
    printf("%0.2f\n", sum/c);
}
