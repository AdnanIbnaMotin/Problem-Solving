/*
Serendipity Booksellers has a book club that awards points to its customers based on the number of books
purchased each month. The points are awarded as follows:

    If a customer purchase 0 books, he or she earns 0 points.
    If a customer purchase 1 books, he or she earns 5 points.
    If a customer purchase 2 books, he or she earns 15 points.
    If a customer purchase 3 books, he or she earns 30 points.
    If a customer purchase 4 or more books, he or she earns 60 points.

Write a program that asks the user to enter the number of books he or she has purchased this month then display the
number of points awarded.
*/
#include <iostream>

int main(int argc, char* argv[])
{
    int purchaseBook = 0;

    std::cout << "Enter the number of books: ";
    std::cin >> purchaseBook;

    purchaseBook = purchaseBook >= 4 ? 4 : purchaseBook;
    switch(purchaseBook)
    {
    case 0:
        std::cout << "Number of points awarded: " << 0 << std::endl;
        break;
    case 1:
        std::cout << "Number of points awarded: " << 5 << std::endl;
        break;
    case 2:
        std::cout << "Number of points awarded: " << 15 << std::endl;
        break;
    case 3:
        std::cout << "Number of points awarded: " << 30 << std::endl;
        break;
    case 4:
        std::cout << "Number of points awarded: " << 60 << std::endl;
        break;
    default:
        std::cout << "Enter a valid number" << std::endl;
        break;
    }

    return 0;
}
