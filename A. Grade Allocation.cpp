#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        vector <int> A(n);
        for(int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        int sum = accumulate(A.begin(), A.end(), 0);
        if(sum <= m)
            printf("%d\n", sum);
        else
            printf("%d\n", m);
    }

    return 0;
}
