#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;
    int ini_hr, ini_min, fin_hr, fin_min;
    cin >> ini_hr >> ini_min >> fin_hr >> fin_min;

    if (ini_hr == fin_hr && ini_min == fin_min){
        hours = 24;
        minutes = 0;
    }
    else if (ini_hr == fin_hr && ini_min != fin_min){
        if(ini_min > fin_min){
            hours = 23;
            minutes = 60 - (ini_min - fin_min);
        }
        else{
            hours = 0;
            minutes = fin_min - ini_min;
        }
    }
    else {
        if (ini_hr > fin_hr)
            hours = 24 - (ini_hr - fin_hr);
        else
            hours = (fin_hr - ini_hr);

        if(ini_min > fin_min){
            hours -= 1;
            minutes = 60 - (ini_min - fin_min);
        }
        else
            minutes = fin_min - ini_min;
    }
    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
    return 0;
}
