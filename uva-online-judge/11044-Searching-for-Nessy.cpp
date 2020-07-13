#include <iostream>

int main(int argc, char* argv[])
{
    int input = 0;
    int m, n;
    std::cin >> input;

    while (input--)
    {
        std::cin >> n >> m;
        if (n < 6) break;

        std::cout << (n/3) * (m/3) << std::endl;
    }
    return 0;
}
