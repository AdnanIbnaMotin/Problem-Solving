#include <iostream>
using namespace std;

int main()
{
    int A[] = {5 , 2, 4, 6, 1, 3};
    int n = sizeof(A)/sizeof(int);
    int i, j, key;
    i = key = 0;

    /// insertion sort
    for (j=1; j<n; j++)
    {
        key = A[j];
        i = j - 1;
        while(i>=0 && A[i] > key)
        {
            A[i+1] = A[i];

            i--;
        }
        cout << i << endl;
        A[i+1] = key;
    }
    for (i=0; i<n; i++) cout << A[i] << " ";
    cout << endl;
}
