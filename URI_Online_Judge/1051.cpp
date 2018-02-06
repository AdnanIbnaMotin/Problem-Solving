#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float n;
    cin >> n;

    if (n >=0 && n <= 2000.00)
        printf("Isento\n");
    else if (n >= 2000.01 && n <= 3000.00)
        printf("R$ %0.2f\n", (n-2000)*0.08);
    else if (n >= 3000.01 && n <= 4500.00)
        printf("R$ %0.2f\n", (n-3000)*0.18 + (1000*0.08));
    else if (n > 4500.00)
        printf("R$ %0.2f\n", (n-4500)*0.28 + (1500*0.18) + (1000*0.08));
    return 0;
}
