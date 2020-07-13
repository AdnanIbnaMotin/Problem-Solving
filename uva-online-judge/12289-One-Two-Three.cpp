#include <iostream>

int main(int argc, char* argv[])
{
    int tc;

    std::cin >> tc;

    while(tc--)
    {
        int one = 0, two = 0;
        std::string word;
        std::cin >> word;

        if (word.length() == 5)
        {
            std::cout << 3 << std::endl;
        }
        else
        {
            if (word[0] == 'o') one++;
            else two++;

            if (word[1] == 'n') one++;
            else two++;

            if (word[2] == 'e') one++;
            else two++;

            if (one > two) std::cout << 1 << std::endl;
            else std::cout << 2 << std::endl;
        }
    }
    return 0;
}
