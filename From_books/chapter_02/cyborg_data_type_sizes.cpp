/*
 * You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some
 * calculations, you need to know how many bytes the following data types use: char, int, float, and 
 * double. You do not have any technical documentation, so you can't look this information up. With a 
 * C++ program that will determine the amount memory used by these types and display the information 
 * on the screen 
*/
#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "Char takes " << sizeof(char) << " bytes of memory" << std::endl;
	std::cout << "Integer takes " << sizeof(int) << " bytes of memory" << std::endl;
	std::cout << "Float takes " << sizeof(float) << " bytes of memory" << std::endl;
	std::cout << "Double takes " << sizeof(double) << " bytes of memory" << std::endl;

	return 0;
}
