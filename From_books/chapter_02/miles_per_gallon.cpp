#include <iostream>

int main(int argc, char* argv[])
{
	float ggUsed = 15.0f;
	float milesDriven = 375.0f;

	std::cout << "MPG: " << milesDriven / ggUsed << " gallons" << std::endl;

	return 0;
}
