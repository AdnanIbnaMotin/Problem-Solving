#include <iostream>
using namespace std;

int main()
{
    int x;
    int a, g, d;
    a = g = d = 0;
    while (true){
        cin >> x;
        if (x == 1) a++;
        else if (x == 2) g++;
        else if (x == 3) d++;
        else if (x == 4) break;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
}
