#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main(){
    int n; cin >> n; 
    vector <int> a(n); for(auto &it : a) cin >> it;
    cout << n << endl;
    for(int i = 0; i < n; i++){
    	int t = i;
    	for(int j = i; j < n; j++){
    		if(a[j] < a[t])
                t = j;
    	}
    	cout << i << " " << t << endl;
    	swap(a[i], a[t]);
    }

    return 0;
}
