#include <iostream>

int main(int argc, char* argv[])
{
    std::string str = "";
    std::string tmp = "";
    int flag = 0;

    getline(std::cin, str);

    for(int i=0; i<str.length(); i++)
    {
        if (str[i] == '"' && flag == 0)
        {
            tmp += "``";
            flag = 1;
        }
        else if (str[i] == '"' && flag == 1)
        {
            tmp += "''";
            flag = 0;
        }
        else tmp += str[i];
    }
    std::cout << std::endl;
    std::cout << tmp << std::endl;
    return 0;
}
