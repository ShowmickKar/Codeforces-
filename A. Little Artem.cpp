#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
    int t; cin >> t;
    while(t--){
      int n, m; cin >> n >> m;
      int p = n*m;
      char a[n][m];
      for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          if(i % 2 == 0){
            if(j % 2 == 0) a[i][j] = 'B';
            else a[i][j] = 'W';
          }
          else{
            if(j % 2 == 0) a[i][j] = 'W';
            else a[i][j] = 'B';
          }
        }
      }
      if(p % 2 == 0) a[1][0] = 'B';
      for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          cout << a[i][j];
        }
        cout << endl;
      }
    }

    return 0;
}


