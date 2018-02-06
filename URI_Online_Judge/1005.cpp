#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double student_A, student_B;
    cin >> student_A >> student_B;

    printf("MEDIA = %0.5f\n", (student_A*3.5 + student_B*7.5)/11);
    return 0;
}
