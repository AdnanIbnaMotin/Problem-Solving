#include <iostream>

int main(int argc, char* argv[])
{
    int a, b, c, d;
    int degree = 1080;

    while(std::cin >> a >> b >> c >> d && (a!=0 || b!=0 || c!=0 || d!=0))
    {

        if (a < b)
            degree += (a - b + 40)*9;
        else
            degree += (a - b) * 9;

        if (c > b)
            degree += (c - b) * 9;
        else
            degree += (c - b + 40) * 9;

        if (d > c)
            degree += (c - d + 40)*9;
        else
            degree += (c - d) * 9;

        std::cout << degree << std::endl;

        degree = 1080;
    }
    return 0;
}
