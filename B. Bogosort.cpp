#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());
        for(int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
