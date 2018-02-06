#include <iostream>
using namespace std;

int main(){
    int n = 5, k, l, ci = 0, cj = 0;
    int a[n][n];
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
            if (a[i][j] == 1){
                k = i;
                l = j;
                break;
            }
        }
    }
    if (k < 2){
        while (k < 2){
            ci += 1;
            k += 1;
        }
    }
    else{
        while (k > 2){
            ci += 1;
            k -= 1;
        }
    }
    if (l < 2){
        while (l < 2){
            cj += 1;
            l += 1;
        }
    }
    else{
        while (l > 2){
            cj++;
            l -= 1;
        }
    }
    cout << ci + cj << endl;
}
