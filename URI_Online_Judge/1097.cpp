#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    i = k = 1;
    j = 7;
    while (i<6){
        while(k<=3){
            cout << "I=" << 2*i-1 << " J=" << j-- << endl;
            k++;
        }
        j += 5;
        k = 1;
        i++;
    }
}

