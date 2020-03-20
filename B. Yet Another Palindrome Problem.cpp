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
        vector <int> A(n);
        for(int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        string Ans = "NO";
        for(int i = 0; i < A.size() - 2; i++)
        {
            for(int j = i + 2; j < A.size(); j++)
            {
                if(A[i] == A[j])
                {
                    Ans = "YES";
                    break;
                }
            }

            if(Ans == "YES")
                break;
        }

        cout << Ans << endl;
    }

    return 0;
}
