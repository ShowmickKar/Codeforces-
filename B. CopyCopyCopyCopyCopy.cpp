#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        vector <int> a(n);
        for(int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }

        int S = n;
        sort(a.begin(), a.end());
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] == a[i + 1])
                S--;
        }

        printf("%d\n", S);
    }

    return 0;
}
