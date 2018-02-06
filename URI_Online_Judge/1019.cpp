#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds;
    float saved;
    int value;

    cin >> value;
    hours = value / 3600;
    value = value%3600;
    minutes = value / 60;
    value = value%60;
    seconds = value;

    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
