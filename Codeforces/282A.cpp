#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0, t;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        if (s == "X++")
            n++;
        if (s == "X--")
            n--;
        if (s == "--X")
            --n;
        if (s == "++X")
            ++n;
    }
    cout << n << endl;
}
