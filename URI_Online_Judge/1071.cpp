#include <iostream>
using namespace std;

int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    if (x > y){
        y++;
        for (int i=y; i<x; i++){
            if (i%2 != 0) {
                sum += i;
            }
        }
    }
    else{
        x++;
        for (int i=x; i<y; i++){
            if (i%2 != 0) sum += i;
        }
    }
    cout << sum << endl;
}
