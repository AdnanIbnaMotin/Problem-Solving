/*
Scientists measure on object's mass in kilogram and its weight in newtons. If you know the amount of mass that an
object has, you can calculate its weight, in newtons, with the following formula:

    Weight = mass * 9.8

Write a program that asks the user to enter an object's mass, then calculates and display its weight. If the object
weights more than 1,000 newtons, display a message indicating that it is too heavy. If the object weights less than
10 newtons, display a message indicating that the object is too light.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float objectMass = 0;

    std::cout << "Enter an object's mass: ";
    std::cin >> objectMass;

    float weight = objectMass * 9.8f;

    std::cout << "The weight of that object is " << weight << " newtons." << std::endl;

    if (weight > 1'000)
    {
        std::cout << "It is too heavy." << std::endl;
    }
    else if (weight < 10)
    {
        std::cout << "It is too light." << std::endl;
    }
    else
    {
        std::cout << "It is perfect" << std::endl;
    }

    return 0;
}
