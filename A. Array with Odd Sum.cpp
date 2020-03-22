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
        int n, condition = 0;
        scanf("%d", &n);
        vector <int> a(n);
        for(int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }

        int sum = accumulate(a.begin(), a.end(), 0);
        if(sum % 2 != 0)
            printf("YES\n");
        else if(a[0] % 2 == 0)
        {
            //int condition = 0;
            for(int i = 1; i < a.size(); i++)
            {
                if(a[i] % 2 != 0)
                {
                    condition = 1;
                    printf("YES\n");
                    break;
                }
            }

            if(condition == 0)
                printf("NO\n");
        }
        else
        {
            for(int i = 1; i < a.size(); i++)
            {
                if(a[i] % 2 == 0)
                {
                    condition = 1;
                    printf("YES\n");
                    break;
                }
            }

            if(condition == 0)
                printf("NO\n");
        }
    }

    return 0;
}
