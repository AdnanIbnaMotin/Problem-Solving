#include <iostream>
using namespace std;

int main()
{
    int n, x, in, out;
    in = out = 0;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> x;
        if (x >= 10 && x <=20) in++;
        else out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
