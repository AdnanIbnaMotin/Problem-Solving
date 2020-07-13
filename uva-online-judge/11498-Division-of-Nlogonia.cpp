#include <iostream>

int main(int argc, char* argv[])
{
    int k, n, m;
    int ts1, ts2;


    while(std::cin >> k && k != 0)
    {
        std::cin >> n >> m;
        for (int i=0; i<k; i++)
        {
            std::cin >> ts1 >> ts2;
            if (ts1 > n && ts2 > m)
            {
                std::cout << "NE" << std::endl;
            }
            else if (ts1 > n && ts2 < m)
            {
                std::cout << "SE" << std::endl;
            }
            else if (ts1 < n && ts2 > m)
            {
                std::cout << "NO" << std::endl;
            }
            else if (ts1 < n && ts2 < m)
            {
                std::cout << "SO" << std::endl;
            }
            else
                std::cout << "divisa" << std::endl;
        }
    }
    return 0;
}
