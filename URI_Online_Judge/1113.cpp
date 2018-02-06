#include <iostream>
using namespace std;

int main()
{
    int x, y;

    while (true){
        cin >> x >> y;
        if (x == y) break;
        else if(y - x > 0){
            cout << "Crescente" << endl;
        }
        else if(y - x < 0){
            cout << "Decrescente" << endl;
        }
    }
}

