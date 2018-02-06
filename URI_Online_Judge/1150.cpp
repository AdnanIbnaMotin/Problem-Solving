#include <iostream>
using namespace std;

int main()
{
    int x, z, sum, c;
    sum = c = 0;
    cin >> x >> z;
    while(true){
        if (z <= x){
            cin >> z;
        }
        else{
            while(true){
                if (sum > z) break;
                else { sum+=x; c++; x++; }
            }
            break;
        }
    }
    cout << c << endl;
}
