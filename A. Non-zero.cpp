#include <iostream>
#include <vector>
#include <numeric>
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

        int count = 0;
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == 0)
            {
                count++;
                a[i]++;
            }
        }

        int sum = accumulate(a.begin(), a.end(), 0);
        if(sum == 0)
            count++;

        printf("%d\n", count);
    }

    return 0;
}
