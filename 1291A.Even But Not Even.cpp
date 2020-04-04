#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int c = 0;
        for(auto it : s) if((it - '0') & 1) c++;
        if(c <= 1){
            cout << "-1\n";
            continue;
        }
        c = 0;
        for(auto it : s){
            if((it - '0') & 1){
                cout << it;
                c++;
            }
            if(c == 2) break;
        }
        cout << endl;
    }

    return 0;
}
