#include <iostream>

int main(int argc, char* argv[])
{
    int T, L, W, H;

    std::cin >> T;
    for (int i=1; i<=T; i++)
    {
        std::cin >> L >> W >> H;
        if (L <= 20 && W <= 20 && H <= 20)
        {
            std::cout << "Case " << i << ": good" << std::endl;
        }
        else std::cout << "Case " << i << ": bad" << std::endl;
    }
    return 0;
}
