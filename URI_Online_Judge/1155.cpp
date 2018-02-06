#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double s = 0;
    for (int i=1; i<=100; i++){
        s += 1.0/i;
    }
    printf("%0.2f\n", s);
}
