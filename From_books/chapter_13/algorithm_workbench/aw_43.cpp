#include <iostream>

class Circle
{
	private:
		double radius;
		const double PI = 3.14159;

	public:
		Circle();
		Circle(double);
		void set(double);
		double get() const;
		double getArea() const;
};
Circle::Circle()
{
	radius = 0;
	std::cout << "Called Five times" << std::endl;
}
Circle::Circle(double radius)
{
	this->radius = radius;
}
void Circle::set(double radius)
{
	this->radius = radius;
}
double Circle::get() const
{
	return radius;
}
double Circle::getArea() const
{
	return PI * radius * radius;
}

/* ||||||||||||||||||||||||| MAIN FUNCTION START ||||||||||||||||||||||||||| */

int main(int argc, char* argv[])
{
	Circle c[5] = {12, 7, 9, 14, 8};
	
	for (int i=0; i<5; i++)
	{
		std::cout << "Circle " << i+1 << " Radius: " << c[i].get() << std::endl;
		std::cout << "Circle " << i+1 << " Area: " << c[i].getArea() << std::endl;
	}

	return 0;
}
/* ||||||||||||||||||||||||| MAIN FUNCTION END ||||||||||||||||||||||||||||| */
