#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, c[5] = {0};
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		c[x]++;
	}

	int total = c[4] + c[3] + c[2]/2;
	c[1] -= c[3];

	if(c[2]&1){
		total++;
		c[1] -= 2;
	}
	if(c[1] > 0)
		total += (c[1] + 3)/4;
	cout << total << endl;

	return 0;
}