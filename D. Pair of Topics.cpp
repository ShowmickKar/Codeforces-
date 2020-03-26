#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> a(n), b(n);
    for(auto &it : a) cin >> it;
    for(auto &it : b) cin >> it;
    vector <int> c(n);
    for(int i = 0; i < n; i++) c[i] = a[i] - b[i];
    sort(c.begin(), c.end());
    long long ans = 0;
    int j = n - 1, i = 0;
    while(i < j){
        if(c[i] + c[j] > 0){
            ans += j - i;
            j--;
        }
        else i++;
    }
    cout << ans << endl;

    return 0;
}
