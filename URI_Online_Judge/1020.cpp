#include <iostream>
using namespace std;

int main()
{
    int years, months, days;
    int value;
    cin >> value;

    years = value / 365;
    cout << years << " ano(s)" << endl;

    months = (value % 365) / 30;
    cout << months << " mes(es)" << endl;

    days = (value % 365) % 30;
    cout << days << " dia(s)" << endl;
    return 0;

}
