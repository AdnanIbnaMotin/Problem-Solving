#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int x = A;
    if (x < B){
        x = B;
    }
    if (x < C){
        x = C;
    }
    printf("%d eh o maior\n", x);
    return 0;
}
