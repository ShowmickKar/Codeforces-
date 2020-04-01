#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int q; cin >> q;
	while(q--){
		int n, team = 1; cin >> n;
		vector <int> a(n); for(auto &it : a) cin >> it;
		sort(a.begin(), a.end());
		for(int i = 0; i < n - 1; i++){
			if(a[i+1] - a[i] <= 1){
				team = 2;
				break;
			}
		}
		cout << team << endl;
	}

	return 0;
}