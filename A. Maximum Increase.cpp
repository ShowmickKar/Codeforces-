#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m = 1, count = 1; cin >> n;
  vector <int> a(n); for(auto &it : a) cin >> it;
  for(int i = 0; i < n - 1; i++){
    if(a[i] < a[i + 1]) count++;
    else count = 1;
    m = max(m,count);
  }
  cout << m << endl;

  return 0;
}