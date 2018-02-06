#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float x, y;
    int n;
    cin >> n;
    while (n--){
        cin >> x >> y;
        if (y==0){
            cout << "divisao impossivel" << endl;
        }
        else
            printf("%0.1f\n", x/y);
    }
    return 0;
}
