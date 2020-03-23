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
        int s = n, r = n;

        while(r >= 10)
        {
            n = r/10;
            r = n + r % 10;
            s += n;
        }

        cout << s << endl;
    }

    return 0;
}
