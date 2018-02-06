#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    string s1 = "asdfghjkl;qwertyuiopzxcvbnm,./";
    string s, s2;
    char d;
    cin >> d >> s2;
    if (d == 'R'){
        for (int i=0; i<s2.size(); i++){
            for (int j=0; j<s1.size(); j++){
                if (s1[j] == s2[i]){
                    s += s1[j-1];
                }
            }
        }
    }
    else{
        for (int i=0; i<s2.size(); i++){
            for (int j=0; j<s1.size(); j++){
                if (s1[j] == s2[i]){
                    s += s1[j+1];
                }
            }
        }
    }
    cout << s << endl;
}
