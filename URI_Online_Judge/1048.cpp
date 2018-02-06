#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float value;
    cin >> value;

    if (value >= 0 && value <= 400.00){
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 15 %%\n", value+(value*0.15), value*0.15);
    }
    else if (value >= 400.01 && value <= 800.00){
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 12 %%\n", value+(value*0.12), value*0.12);
    }
    else if (value >= 800.01 && value <= 1200.00){
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 10 %%\n", value+(value*0.10), value*0.10);
    }
    else if (value >= 1200.01 && value <= 2000.00){
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 7 %%\n", value+(value*0.07), value*0.07);
    }
    else{
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 4 %%\n", value+(value*0.04), value*0.04);
    }

}
