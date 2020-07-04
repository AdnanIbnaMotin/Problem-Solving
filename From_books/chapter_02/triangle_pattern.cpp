/*
 * Write a program that display the following pattern on the screen
 *       *
 *     * * *
 *   * * * * *
 *  * * * * * * 
*/

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
	return 0;
}
