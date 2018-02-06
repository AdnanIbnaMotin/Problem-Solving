#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    float s = 0.0;
    float j, k;

    for (int i=1; i<=20; i++){
        j = 2*i - 1;
        k = pow(2, i-1);
        s += j/k;
    }
    printf("%0.2f\n", s);
}
