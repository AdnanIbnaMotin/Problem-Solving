#include <iostream>

int main(int argc, char* argv[])
{
    int tc;
    int n;

    std::cin >> tc;
    while(tc--)
    {
        std::cin >> n;
        long long result = (((((n * 567) / 9 ) + 7492) * 235) / 47) - 498;
        std::string str = std::to_string(result);

        std::cout << str[str.length()-2] << std::endl;
    }

    return 0;
}
