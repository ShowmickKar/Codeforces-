#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector <int> A(3);
        for(auto &it : A) cin >> it;
        int n; cin >> n;
        int s = accumulate(A.begin(), A.end(), 0) + n;
        sort(A.begin(), A.end());
        if(n >= 2*A[2] - A[0] - A[1] && s % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
