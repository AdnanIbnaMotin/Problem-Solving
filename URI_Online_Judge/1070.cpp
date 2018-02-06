#include <iostream>
using namespace std;

int main()
{
    int X, c = 6;
    cin >> X;
    while(c){
        if (X%2!= 0) {
            cout << X << endl;
            c--;
        }
        X++;
    }
    return 0;
}

