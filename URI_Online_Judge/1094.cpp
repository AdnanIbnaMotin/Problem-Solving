#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, num, total, c, r, s;
    total = c = r = s = 0;
    char ch;
    cin >> n;

    while(n--){
        cin >> num >> ch;
        total += num;

        if (ch == 'C') c+=num;
        else if (ch == 'R') r+=num;
        else if (ch == 'S') s+=num;
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;

    printf("Percentual de coelhos: %0.2f %%\n", (float)c*100/total);
    printf("Percentual de ratos: %0.2f %%\n", (float)r*100/total);
    printf("Percentual de sapos: %0.2f %%\n", (float)s*100/total);

}
