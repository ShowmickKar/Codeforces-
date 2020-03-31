#include <bits/stdc++.h>
using namespace std;

int main(){
   int n; cin >> n;
   vector <int> a(n); for(auto &it : a) cin >> it;
   int m; cin >> m;
   vector <int> b(m); for(auto &it : b) cin >> it;
   int count = 0;
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         if(abs(a[i] - b[j]) <= 1){
            b[j] = 1000;
            count++;
            break;
         }
      }
   }

   cout << count << endl;
   return 0;
}