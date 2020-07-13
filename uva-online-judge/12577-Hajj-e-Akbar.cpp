#include <iostream>

int main(int argc, char* argv[])
{
    std::string str = "";
    int i = 1;

    while(std::cin >> str && str != "*")
    {
        if (str == "Hajj") std::cout << "Case " << i <<": Hajj-e-Akbar" << std::endl;
        else if (str == "Umrah") std::cout << "Case " << i << ": Hajj-e-Asghar" << std::endl;
        i++;
    }
    return 0;
}
