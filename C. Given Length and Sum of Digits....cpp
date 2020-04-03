#include <bits/stdc++.h>
using namespace std;

int main(){
	int i, t, m, s; cin >> m >> s;
	string a, b;
	if(s == 0){
		cout << (m == 1 ? "0 0\n" : "-1 -1\n");
		return 0;
	}
	for(int i = 0; i < m; i++){
		t = min(s, 9);
		b.push_back(t + '0');
		s -= t;
	}
	if(s > 0){
		cout << "-1 -1\n";
		return 0;
	}
	for(i = m - 1; i >= 0; i--) a.push_back(b[i]);
	for(i = 0; a[i] == '0'; i++); a[0]++, a[i]--;
	cout << a << " " << b << endl;
	
	return 0;
}