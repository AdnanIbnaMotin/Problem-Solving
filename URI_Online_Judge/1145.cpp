#include <iostream>
using namespace std;

int main()
{
    int x, y, c = 0;
    cin >> x >> y;

    for (int i=1; i<=y; i++){
        cout << i << " ";
        c++;
        if (c==x) { cout << endl; c = 0; }
    }
}
