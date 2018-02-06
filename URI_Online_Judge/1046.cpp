#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b){
        a = 24 - (a-b);
    }
    else if (a == b) {
        a = 24;
    }
    else if (a < b){
        a = b - a;
    }
    cout << "O JOGO DUROU " << a << " HORA(S)" << endl;
}
