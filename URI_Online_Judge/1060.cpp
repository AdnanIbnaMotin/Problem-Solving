#include <iostream>
using namespace std;

int main()
{
    int inc=0, i=6;
    float n;
    while(i--){
        cin >> n;
        if(n > 0) inc++;
    }
    cout << inc << " valores positivos" << endl;
    return 0;
}
