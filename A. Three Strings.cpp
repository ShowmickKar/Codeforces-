#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		bool condition = true;
		string a, b, c; 
		cin >> a >> b >> c;
		for(int i = 0; i < a.length(); i++){
			if(a[i] != b[i]){
				if(c[i] == a[i]) swap(a[i], c[i]);
				else if(c[i] == b[i]) swap (b[i], c[i]);
				else{
					condition = false;
					break;
				}
			}
			else{
				if(a[i] == c[i]) continue;
				else{
					condition = false;
					break;
				}
			}
		}
		/* for(int i = 0; i < a.length(); i++){
			if(a[i] != b[i]){
				condition = false;
				break; 
			} 
		} */
		if(condition) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}