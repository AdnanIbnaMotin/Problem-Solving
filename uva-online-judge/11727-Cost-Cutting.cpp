#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, arr[3];
    cin >> T;

    for (int i=1; i<=T; i++)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        cout << "Case " << i << ": " << arr[1] << endl;
    }
    return 0;
}
