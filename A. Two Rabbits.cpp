#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int x, y, a, b; cin >> x >> y >> a >> b;
		int T = (y - x)/(a + b);
		if((y - x) % (a + b) != 0) cout << "-1\n";
		else cout << T << endl;
	}

	return 0;
}