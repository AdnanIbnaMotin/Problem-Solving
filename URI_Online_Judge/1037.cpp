#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float input;
    cin >> input;

    if (input < 0 || input > 100)
        cout << "Fora de intervalo" << endl;
    else if (input <= 25){
        cout << "Intervalo [0,25]" << endl;
    }
    else if (input > 25 && input <= 50){
        cout << "Intervalo (25,50]" << endl;
    }
    else if (input > 50 && input <= 75){
        cout << "Intervalo (50,70]" << endl;
    }
    else if (input > 75 && input <=100){
        cout << "Intervalo (75,100]" << endl;
    }
    return 0;
}
