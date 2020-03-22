#include <stdio.h>

int main()
{
    int nA, nB, k, m;
    scanf("%d%d%d%d", &nA, &nB, &k, &m);
    int a[nA], b[nB];
    for(int i = 0; i < nA; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < nB; i++)
    {
        scanf("%d", &b[i]);
    }

    if(a[k - 1] < b[nB - m])
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
