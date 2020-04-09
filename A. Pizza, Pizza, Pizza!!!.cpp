#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
   ll n; cin >> n; n++;
   if(n == 1){cout << "0\n"; return 0;}
   if(n&1) cout << n << endl;
   else cout << n/2 << endl;

    return 0;
}