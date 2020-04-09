#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
    int n; cin >> n;
    vector <int> x(n), y(n);
    for(int i = 0; i < n; i++){
      cin >> x[i] >> y[i];
    }
    int u = accumulate(x.begin(), x.end(), 0);
    int l = accumulate(y.begin(), y.end(), 0);
    if(u % 2 == 0 && l % 2 == 0) cout << "0\n";
    else if((u&1 && l % 2 == 0) || (l&1 && u % 2 == 0)) cout << "-1\n";
    else{
      bool c = false;
      for(int i = 0; i < n; i++){
        if((x[i] % 2 == 0 && y[i] & 1) || (y[i] % 2 == 0 && x[i] & 1)){
          c = true;
          break;
        }
      }
      if(c == true) cout << "1\n";
      else cout << "-1";
    }

    return 0;
}