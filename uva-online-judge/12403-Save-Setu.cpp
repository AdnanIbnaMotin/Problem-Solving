#include <iostream>

int main(int argc, char* argv[])
{
    int T, K, amount = 0;
    std::string str = "";

    std::cin >> T;
    if (T<1 || T>100) return 0;

    while(T--)
    {
        std::cin >> str;
        if (str == "donate")
        {
            std::cin >> K;
            amount += K;
        }
        else
        {
            std::cout << amount << std::endl;
        }
    }
    return 0;
}
