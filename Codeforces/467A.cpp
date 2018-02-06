#include<iostream>
using namespace std;

int main()
{
    int p, q, n, free_room = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>q;
        if(1<q-p)
            free_room++;
    }
    cout<<endl<<free_room<<endl;
}
