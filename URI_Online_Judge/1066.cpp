#include <iostream>
using namespace std;

int main()
{
    int num, e, o, p, n;
    e = o = p = n = 0;
    for (int i=1; i<=5; i++){
        cin >> num;
        if (num%2 == 0 || num == 0) e++;
        else o++;

        if (num > 0) p++;
        else if (num < 0) n++;
    }
    cout << e << " valor(es) par(es)" << endl << o << " valor(es) impar(es)" << endl << p << " valor(es) positivo(s)" << endl << n << " valor(es) negativo(s)" << endl;
    return 0;
}
