#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float arr[7], sum = 0;
    int c=0;
    for (int i=0; i<6; i++){
        cin >> arr[i];
        if (arr[i] > 0){
            sum += arr[i]; c++;
        }
    }
    cout << c << " valores positivos" << endl;
    printf("%0.1f\n", sum/c);
}
