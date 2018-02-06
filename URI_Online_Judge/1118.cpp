#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float x, sum = 0;
    int c = 0, y;
    bool finished = false;

    while (true){
        cin >> x;
        if (x >= 0 && x <= 10){
            c++;
            sum += x;
            if (c == 2){
                printf("media = %0.2f\n", sum / 2);
                printf("novo calculo (1-sim 2-nao)\n");
                while (true){
                    cin >> y;
                    if (y==1) break;
                    else if (y < 1 || y > 2){
                        printf("novo calculo (1-sim 2-nao)\n");
                    }
                    else if (y == 2){
                        finished = true; break;
                    }
                }
                c = 0;
                sum = 0;
            }
        }
        else
            cout << "nota invalida" << endl;

        if (finished) break;
    }
}
