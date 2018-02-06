#include <iostream>
#include <stdio.h>
using namespace std;

class A{
public:
    int T, c;
    int PA, PB;
    double GA, GB;
    void PopulationIncrease();

};
void A::PopulationIncrease()
{
    cin >> T;
    while(T--)
    {
        c = 0;
        cin >> PA >> PB >> GA >> GB;
        while(PA <= PB)
        {
            PA *= (GA / 100.0) + 1.0;
            PB *= (GB / 100.0) + 1.0;

            c++;
            if (c > 100) {
                cout << "Mais de 1 seculo." << endl; break;
            }
        }
        if(c <= 100) cout << c << " anos." << endl;

    }
}
int main()
{
    A obj;
    obj.PopulationIncrease();
    return 0;
}
