#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, mx = 0, pos = 0;
    for (int i=1; i<=100; i++){
        cin >> n;
        if (i==0) { continue; i=1; }
        else if (n > mx) {
            mx = n;
            pos = i;
        }
    }
    cout << mx << endl;
    cout << pos << endl;
}
