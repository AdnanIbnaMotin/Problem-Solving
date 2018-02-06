#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int pro_code, pro_num;
    float pro_value;
    float sum = 0;

    for (int i=1; i<=2; i++){
        cin >> pro_code >> pro_num >> pro_value;
        float get = pro_num * pro_value;
        sum += get;
    }
    printf("VALOR A PAGAR: R$ %0.2f\n", sum);
    return 0;
}
