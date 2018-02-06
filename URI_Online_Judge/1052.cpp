#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string arr[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << arr[n-1] << endl;
    return 0;
}
