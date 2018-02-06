#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> x;
        if (x == 0) cout << "NULL" << endl;
        else if (x % 2 == 0){
            if (x > 0) cout << "EVEN POSITIVE" << endl;
            else if (x < 0) cout << "EVEN NEGATIVE" << endl;
        }
        else if (x % 2 != 0){
            if (x > 0) cout << "ODD POSITIVE" << endl;
            else if (x < 0) cout << "ODD NEGATIVE" << endl;
        }
    }
    return 0;
}
