#include <iostream>

int main(int argc, char* argv[])
{
    string s;
    while(getline(std::cin, s))
    {
        std::cout << s << std::endl;
    }
    return 0;
}
