#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
	int n, k, count = 0;; cin >> n >> k;
	vector <int> a(n), b(n); for(auto &it : a) cin >> it;
	for(int i = 0; i < n; i++) b[i] = a[i];
	for(int i = 1; i < n - 1; i++){
		if(a[i] + a[i - 1] < k){
			int s = k - (a[i] + a[i - 1]);
			a[i] += s; 
			//count += s;
		}
	}
	if(a[n - 1] + a[n - 2] < k){
		a[n - 2] += k - (a[n - 1] + a[n - 2]);
		//count += k - (a[n - 1] + a[n - 2]);
	}
	for(int i = 0; i < n; i++) count += a[i] - b[i];
	cout  << count  << endl;
	for(auto &it : a) cout << it << " ";

    return 0;
}

/*vector <int> a(n + 2); a[0] = a[n + 1] = k;
	for(int i = 1; i < n; i++) cin >> a[i]; */