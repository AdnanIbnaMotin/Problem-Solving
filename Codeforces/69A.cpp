#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, x, y, z, a=0, b=0, c=0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d%d", &x, &y, &z);
        a+=x, b+=y, c+=z;
    }
    if(a==0 && b==0 && c==0) printf("YES");
    else printf("NO");
    return 0;
}
