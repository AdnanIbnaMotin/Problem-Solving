#include <iostream>
using namespace std;

int main()
{
    int A[8] = {100, 50, 20, 10, 5, 2, 1};
    int N, i = 0, store = 0;
    cin >> N;

    cout << N << endl;
    while(i < 7)
    {
        store = N/A[i];
        N = N%A[i];
        cout << store << " nota(s) de R$ " << A[i] << ",00" << endl;
        i++;
    }
    return 0;
}
