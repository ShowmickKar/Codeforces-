#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, i, a, b; cin >> n >> a >> b;
    for(i = 1; (n - i) >= a && (i - 1) <= b; i++);
    cout << i - 1 << endl;

    return 0;
}
