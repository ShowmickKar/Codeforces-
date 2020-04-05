#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
    ul n; cin >> n;
    vector <ul> a(n); for(auto &it : a) cin >> it;
    sort(a.begin(), a.end());
    ul x = a.front(), y = a.back();
    if(x == y){
    	cout << "0 " << n*(n - 1)/2 << endl;
    	return 0;
    }
    ul p = upper_bound(a.begin(), a.end(), x) - lower_bound(a.begin(), a.end(), x);
    ul q = upper_bound(a.begin(), a.end(), y) - lower_bound(a.begin(), a.end(), y);
    cout << y - x << " " << p*q << endl;

    return 0;
}
