#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, x, y, sum = 0;
    cin >> n;
    while (n--){
        cin >> x >> y;
        if (x - y < 0){
            for (int i=x+1; i<y; i++){
                if (i%2 != 0) sum += i;
            }
        }
        if (x - y > 0){
            for (int i=y+1; i<x; i++){
                if (i%2 != 0) sum += i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}
