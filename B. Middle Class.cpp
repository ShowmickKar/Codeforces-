#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
	int T; cin >> T;
	while(T--){
		int n, x; cin >> n >> x;
		vector <double> a(n); for(auto &it : a) cin >> it;
		sort(a.rbegin(), a.rend());
		double sum = 0;
		int count = 0;
		for(int i = 0; i < n; i++){
			sum += a[i];
			double r = sum/(i + 1);
			if(r >= x) count++;
		}
		cout << count << endl;
	}

    return 0;
}


/*vector <int> a(n + 2); a[0] = a[n + 1] = k;
	for(int i = 1; i < n; i++) cin >> a[i]; */