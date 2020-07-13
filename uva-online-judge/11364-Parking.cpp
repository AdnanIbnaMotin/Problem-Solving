#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
    int testCase, n;
    std::cin >> testCase;

    while(testCase--)
    {
        std::cin >> n;
        int arr[n] = {0};

        for (int i=0; i<n; i++)
        {
            std::cin >> arr[i];
        }
        std::sort(arr, arr+n);
        std::cout << 2 * (arr[n-1] - arr[0]) << std::endl;
    }
    return 0;
}
