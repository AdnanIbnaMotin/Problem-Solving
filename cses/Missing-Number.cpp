#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
    long long n;
    long long i = 0;
    std::cin >> n;

    if (n==1) return 0;
    n--;

    long long arr[n];

    while(i<n)
    {
        std::cin >> arr[i];
        i++;
    }

    std::sort(arr, arr+n);
    for (i=0; i<n; i++)
    {
        if (i+1 != arr[i])
        {
            std::cout << i+1 << std::endl;
            break;
        }
    }
    if (i == n)
    {
        std::cout << i+1 << std::endl;
    }
    return 0;
}
