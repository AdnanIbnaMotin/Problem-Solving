#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    float a, b, c;
    cin >> n;

    for (int i=1; i<=n; i++){
        cin >> a >> b >> c;
        printf("%0.1f\n", ((a*2) + (b*3) + (c*5)) / (2+3+5));
    }
    return 0;
}
