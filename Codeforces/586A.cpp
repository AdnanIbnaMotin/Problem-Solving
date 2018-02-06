#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i] ;
    }
    int k = 0;
    for (int i=0 ; i<n; i++){
        if (a[i] == 1)
            k += 1;
    }
    for (int i=1; i<n; i++){
        if (a[i] == 0 and a[i+1] == 1 and a[i-1] == 1)
                k += 1;
    }
    cout << k << endl;
}
