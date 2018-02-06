#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x, y, sum = 0, c = 0;
    int n;
    cin >> n;

    while(n--){
        cin >> x >> y;
        while(true){
            if (c == y) break;
            else if (x%2 != 0){
                sum+=x;
                c++;
            }
            x++;
        }
        cout << sum << endl;
        c = sum = 0;
    }
}
