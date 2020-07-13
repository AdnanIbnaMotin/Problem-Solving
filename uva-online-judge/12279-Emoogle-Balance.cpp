#include <iostream>

int main(int argc, char* argv[])
{
    int ts, p = 1;

    while(std::cin >> ts && ts != 0)
    {
        int g = 0, o = 0;
        int arr[ts] = {0};
        for (int i=0; i<ts; i++)
        {
            std::cin >> arr[i];
            if (arr[i] == 0) g++;
            else o++;
        }
        std::cout << "Case " << p++ << ": " << o-g << std::endl;
    }
    return 0;
}
