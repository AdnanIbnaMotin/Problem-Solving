#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[6] = {0};
    int data = 0;

    for (int i=0; i<3; i++){
        cin >> a[i];
        a[i+3] = a[i];
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (a[i] < a[j]){
                data = a[i];
                a[i] = a[j];
                a[j] = data;
            }
        }
    }

    for (int i=0; i<3; i++){
        cout << a[i] << endl;
    }
    cout << endl;
    for (int i=3; i<6; i++){
        cout << a[i] << endl;
    }
}
