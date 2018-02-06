#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    float num;
    int store = 0, i = 0;
    int arr1[13] = {100, 50, 20, 10, 5, 2, 1, 50, 25, 10, 5, 1};
    cin >> num;

    int deci1 = num;
    num = num - deci1;
    num = roundf(num * 100);
    int deci2 = num;

    cout << "NOTAS:" << endl;
    while (i<12)
    {
        store = deci1 / arr1[i];
        deci1 = deci1 % arr1[i];
        if(i < 7){
            if(i == 6) {
                cout << "MOEDAS:" << endl;
                printf("%d moeda(s) de R$ %d.00\n", store, arr1[i]);
                deci1 = deci2;
            }
            else {
               printf("%d nota(s) de R$ %d.00\n", store, arr1[i]);
            }
        }
        else{
            printf("%d moeda(s) de R$ %0.2f\n", store, (float)arr1[i]/100);
        }
        i++;
    }
}
