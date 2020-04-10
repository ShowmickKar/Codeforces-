#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
   int w; cin >> w;
   if(w&1){
    cout << "NO\n";
    return 0;
   }
   bool c = false;
   for(int i = 2; i < w; i += 2){
    if((w - i) % 2 == 0){
      c = true;
      cout << "YES\n";
      break;
    }
   }
   if(!c) cout << "NO\n";

    return 0;
}