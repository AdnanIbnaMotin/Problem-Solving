#include <iostream>
using namespace std;

int main()
{
    int m, n, sum = 0;

    while (true){
        cin >> m >> n;
        if (m <= 0 || n <= 0)
            break;
        else if (m == n){
            sum = m;
        }
        else if(m - n > 0){
            for (int i=n; i<=m; i++){
                cout << i << " ";
                sum += i;
            }
        }
        else if(m - n < 0){
            for (int i=m; i<=n; i++){
                cout << i << " ";
                sum += i;
            }
        }
        cout << "Sum=" << sum << endl;
        sum = 0;
    }
}
