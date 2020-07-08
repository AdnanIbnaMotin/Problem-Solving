#include <iostream>

class Date
{
private:
    int month, day, year;
    const std::string arr[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
public:
    Date();
    Date(int, int, int);
    void printFormatOne() const;
    void printFormatTwo() const;
    void printFormatThree() const;
};
Date::Date()
{
    month = day = year = 0;
}
Date::Date(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
}
void Date::printFormatOne() const
{
    std::cout << month << "/" << day << "/" << year << std::endl;
}
void Date::printFormatTwo() const
{
    std::cout << arr[month - 1] << " " << day << ", " << year << std::endl;
}
void Date::printFormatThree() const
{
    std::cout << day << " " << arr[month - 1] << " " << year << std::endl;
}
int main(int argc, char* argv[])
{
    int day, month, year;

    std::cout << "Enter the number of month: ";
    std::cin >> month;

    std::cout << "Enter the number of days: ";
    std::cin >> day;

    std::cout << "Enter the year: ";
    std::cin >> year;

    std::cout << std::endl;
    if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31))
    {
        Date date(month, day, year);
        date.printFormatOne();
        date.printFormatTwo();
        date.printFormatThree();
    }
    else
    {
        std::cout << "Please enter a valid information...";
    }
    return 0;
}
