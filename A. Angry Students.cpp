#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
    int t; cin >> t;
    while(t--){
      int k; string s; cin >> k >> s;
      int m = 0, c = 0;
      while(k--){
        if(s[k] == 'P') c++;
        else{
          m = max(c, m);
          c = 0;
        }
      }
      cout << m << endl;
    }

    return 0;
}
