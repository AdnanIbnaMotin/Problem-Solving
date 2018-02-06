#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    printf("TRIANGULO: %0.3f\n", A*C/2);
    printf("CIRCULO: %0.3f\n", 3.14159*C*C);
    printf("TRAPEZIO: %0.3f\n", ((A+B)*C)/2);
    printf("QUADRADO: %0.3f\n", B*B);
    printf("RETANGULO: %0.3f\n", A*B);
    return 0;
}
