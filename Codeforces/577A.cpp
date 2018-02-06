#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int c = 0;
    if (n >= x) c++;
    for (int i=2; i<=n; i++){
        if (x%i == 0 and x/i <= n) c++;
    }
    cout << c << endl;
}
