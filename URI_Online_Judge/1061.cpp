#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int d1, d2, h1, h2, m1, m2, s1, s2;
    int h, m, s, d;
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    d = d2 - d1;
    h = h2 - h1;
    m = m2 - m1;
    s = s2 - s1;

    if (s < 0){
        s += 60;
        m--;
    }

    if (m < 0){
        m += 60;
        h--;
    }

    if (h < 0){
        h += 24;
        d--;
    }
    cout << d << " dia(s)" << endl << h << " hora(s)" << endl << m << " minuto(s)" << endl << s << " segundo(s)" << endl;
    return 0;

}
