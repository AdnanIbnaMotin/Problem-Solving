#include <iostream>
using namespace std;

int main(){
    int n, j = 0;
    cin >> n;
    int a[n], b[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        j = a[i];
        b[j] = i;
    }
    for(int i=1; i<=n; i++)
        cout << b[i] << " ";
    cout << endl;
}
