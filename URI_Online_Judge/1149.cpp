#include <iostream>
using namespace std;

int main()
{
    int a, n, sum = 0;
    cin >> a >> n;
    while (true){
        if(n==0)
            cin >> n;
        else {
            for (int i=1; i<=n; i++){
                sum += a;
                a++;
            }
            cout << sum << endl;
            break;
        }
    }
    return 0;
}
