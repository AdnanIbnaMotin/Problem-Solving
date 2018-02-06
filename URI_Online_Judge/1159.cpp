#include <iostream>
using namespace std;

class EvenSum {
public:
    int x, c, total;
    EvenSum();
    void sum();
};
EvenSum::EvenSum()
{
    c = 0;
    total = 0;
}
void EvenSum::sum()
{
    while(true){
        cin >> x;
        if (x == 0) break;
        else{
            while(true){
                if (c==5) break;
                else if (x%2 == 0){
                    total+=x; c++;
                }
                x++;
            }
            c = 0;
        }
        cout << total << endl;
        total = 0;
    }

}
int main()
{
    EvenSum obj;
    obj.sum();
    return 0;
}
