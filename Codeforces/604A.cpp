
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
  int a[5], b[5], c[5] = {500, 1000, 1500, 2000, 2500};
  for (int i=0; i<5; i++){
    cin >> a[i];
  }
  for (int j=0; j<5; j++){
    cin >> b[j];
  }
  int hs, hw, total = 0;
  cin >> hs >> hw;

  float ma, p, q;
  int x = 0;

  for (int i=0; i<5; i++){
      x = c[i];
      p = 0.3*x;
      q = (250-a[i])*x;
      ma = max(p, (q/250) - (50*b[i]));
      total +=  (int)(ma);
  }
  while (hw--){
    total -= 50;
  }
  while (hs--){
    total += 100;
  }
  cout << total << endl;
}
