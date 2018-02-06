#include <iostream>
using namespace std;

int main()
{
    float i, j, k;
    i = 0; j = 1;

    while (i<=2.2){
        while(j<=3){
            cout << "I=" << i << " J=" << j+i << endl;
            j++;
        }
        i += 0.2; j = 1;
    }
}
