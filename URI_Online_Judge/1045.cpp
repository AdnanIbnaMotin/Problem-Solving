#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    double a[3] = {0};

    for (int i=0; i<3; i++)
        cin >> a[i];
    sort (a, a+3, greater<int>());
    double A = a[0], B = a[1], C = a[2];

    if (A >= B+C)
        cout << "NAO FORMA TRIANGULO" << endl;
    else if (A*A > B*B + C*C)
        cout << "TRIANGULO OBTUSANGULO" << endl;

    if (A*A == B*B + C*C)
        cout << "TRIANGULO RETANGULO" << endl;
    if (A*A < B*B + C*C)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if (A == B && B == C && A == C)
        cout << "TRIANGULO EQUILATERO" << endl;
    if ((A == B && A != C) || (A == C && A != B) || (B == C && B!= A))
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
