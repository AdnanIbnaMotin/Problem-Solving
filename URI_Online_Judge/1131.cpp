#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i, g, a;
    int total, iw, gw, d;
    total = iw = gw = d = 0;

    while(true){
        cin >> i >> g;
        printf("Novo grenal (1-sim 2-nao)\n");
        total++;

        if (i > g) iw++;
        else if (g > i) gw++;
        else if (g == i){
            d++;
        }
        cin >> a;
        if (a == 1){
            continue;
        }
        else break;
    }
    cout << total << " grenais" << endl;
    cout << "Inter:" << iw << endl;
    cout << "Gremio:" << gw << endl;
    cout << "Empates:" << d << endl;

    if (iw > gw) cout << "Inter venceu mais" << endl;
    else if (gw > iw) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;
}
