#include <iostream>
using namespace std;

int main()
{
    int j=60;
    for (int i=1; i<=13; i++){
        cout << "I=" << 3*i - 2 << " J=" << j << endl;
        j -= 5;
    }
    return 0;
}
