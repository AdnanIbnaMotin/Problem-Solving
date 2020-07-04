#include <iostream>

int main(int argc, char* argv[])
{
	for (int i=0; i<4; i++)
    {
        for (int j=4; j>i; j--)
        {
            std::cout << " ";
        }
        for (int j=0; j<2*i+1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<=i+1; j++)
		{
			std::cout << " ";
		}
		for (int j=2*i-1; j<4; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
