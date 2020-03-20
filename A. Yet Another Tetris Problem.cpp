#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        vector <int> A(n);
        for(int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        int Ans = 1;

        if(A[0] % 2 == 0)
        {
            for(int i = 1; i < A.size(); i++)
            {
                if(A[i] % 2 != 0)
                {
                    Ans = 0;
                    break;
                }
            }
        }
        else
        {
            for(int i = 1; i < A.size(); i++)
            {
                if(A[i] % 2 == 0)
                {
                    Ans = 0;
                    break;
                }
            }
        }

        if(Ans == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
