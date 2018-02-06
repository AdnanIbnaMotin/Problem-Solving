#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    float e = b*b - 4*a*c;
    float d1 = -b + sqrt (e);
    float d2 = -b - sqrt (e);
    if (e < 0 || d1 == 0 || d1 == 0){
        cout << "Impossivel calcular" << endl;
    }
    else{
        printf("R1 = %0.5f\n", d1/(2*a));
        printf("R2 = %0.5f\n", d2/(2*a));
    }
}
