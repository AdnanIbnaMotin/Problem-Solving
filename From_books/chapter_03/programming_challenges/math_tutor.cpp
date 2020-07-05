/*
Write a program that can be used as a mat.h tutor for a young student. The program should display two random
numbers to be added, such as

                                     247
                                    +129

The program should rhen pause while the student works on the problem. When the student is ready to check the answer, he or she can press
a key and the program will display the correct solution:

                                     247
                                    +129
                                    -----
                                     376

*/

#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
    srand(time(0));

    int a = (rand() % 1000);
    int b = (rand() % 1000);

    std::cout << "What is the solution of this problem: " << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << " " << a << std::endl;
    std::cout << "+" << b << std::endl;
    std::cout << "-----" << std::endl;
    std::cin.get();

    std::cout << "Answer of this problem is: " << a+b << std::endl;

    return 0;
}
