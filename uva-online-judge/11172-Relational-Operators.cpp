#include <iostream>

int main(int argc, char* argv[])
{
    std::string sign = "";
    int a, b, i = 1;
    bool result;

    while (std::cin >> a >> sign >> b && sign != "E")
    {
        if (sign == ">") result = a > b;
        else if (sign == ">=") result = a >= b;
        else if (sign == "<") result = a < b;
        else if (sign == "<=") result = a <= b;
        else if (sign == "==") result = a == b;
        else if (sign == "!=") result = a != b;
        std::cout << "Case " << i++ << ": " << (result > 0 ? "true" : "false") << std::endl;
    }
    return 0;
}
