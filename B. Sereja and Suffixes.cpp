#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
    int n, m; cin >> n >> m;
    int a[n], dp[n]; for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    unordered_set <int> s;
    for(int i = n - 1; i >= 0; i--){
      s.insert(a[i]);
      dp[i] = s.size();
    }
    //for(int i = 0; i < n; i++) cout << dp[i] << endl;
    while(m--){
      int l; cin >> l;
      cout << dp[l - 1] << endl;
    }

    return 0;
}
