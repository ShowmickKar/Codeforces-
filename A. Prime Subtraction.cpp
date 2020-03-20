#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long x, y;
        scanf("%lld%lld", &x, &y);
        if(x - y == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
