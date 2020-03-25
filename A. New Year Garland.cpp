#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector <int> A(3);
        int s = 0;
        for(int i = 0; i < 3; i++)
        {
            cin >> A[i];
            s += A[i];
        }

        int c = 1;
        for(int i = 0; i < 3; i++)
        {
            if(A[i] > s - A[i] + 1)
            {
                c = 0;
                cout << "NO\n";
                break;
            }
        }

        if(c == 1)
            cout << "YES\n";
    }

    return 0;
}
