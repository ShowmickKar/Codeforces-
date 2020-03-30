#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, l; cin >> n >> l;;
	vector <int> a(n); for(auto &it : a) cin >> it;
	sort(a.begin(), a.end());
	int m = 2*max(a[0], l - a[n - 1]); 
	for(int i = 0; i < n - 1; i++) m = max(m, a[i + 1] - a[i]);
	if(m&1) cout << m/2 << ".5000000000\n";
	else cout << m/2 << ".0000000000\n";

	return 0;
}