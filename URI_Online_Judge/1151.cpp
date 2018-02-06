#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, n, c=0;
    cin >> n;
    while(n--){
        if (n==0) cout << a;
        else cout << a << " ";
        c = a;
        a = b;
        b = c+b;

    }
    cout << endl;
}
