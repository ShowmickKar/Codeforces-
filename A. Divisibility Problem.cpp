#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if(a % b == 0) cout << "0\n";
        else if(a > b) cout << b - a%b << endl;
        else cout << b - a << endl;
    }

    return 0;
}
