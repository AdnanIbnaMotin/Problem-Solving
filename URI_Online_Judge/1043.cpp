#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    if ( a + b > c && b + c > a && a + c > b){
        printf("Perimetro = %0.1f\n", a+b+c);
    }
    else
        printf("Area = %0.1f\n", (a+b)*c/2);
    return 0;
}
