#include <iostream>
using namespace std;

int main()
{
    int number, c = 0;

    for (int i=1; i<=5; i++){
        cin >> number;
        if (number%2 == 0) c++;
    }
    cout << c << " valores pares" << endl;
    return 0;
}
