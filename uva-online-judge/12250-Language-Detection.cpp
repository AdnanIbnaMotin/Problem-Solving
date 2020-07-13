#include <iostream>

int main(int argc, char* argv[])
{
    std::string S;
    int i = 1;

    while(std::cin >> S && S != "#")
    {
        if (S == "HELLO") std::cout << "Case " << i << ": EGNLISH" << std::endl;
        else if (S == "HOLA") std::cout << "Case " << i << ": SPANISH" << std::endl;
        else if (S == "HALLO") std::cout << "Case " << i << ": GERMAN" << std::endl;
        else if (S == "BONJOUR") std::cout << "Case " << i << ": FRENCH" << std::endl;
        else if (S == "CIAO") std::cout << "Case " << i << ": ITALIAN" << std::endl;
        else if (S == "ZDRAVSTVUJTE") std::cout << "Case " << i << ": RUSSIAN" << std::endl;
        else
            std::cout << "Case " << i << ": UNKNOWN" << std::endl;
        i++;
    }
    return 0;
}
