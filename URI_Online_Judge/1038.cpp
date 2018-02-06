#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float arr[6] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int X, Y;
    cin >> X >> Y;

    printf("Total: R$ %0.2f\n", arr[X-1]*Y);
    return 0;
}
