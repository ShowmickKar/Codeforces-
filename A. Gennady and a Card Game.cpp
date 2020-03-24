#include <stdio.h>

int main()
{
    char A[3];
    scanf("%s", &A);
    int c = 0;
    for(int i = 1; i <= 5; i++)
    {
        char P[3];
        scanf("%s", &P);
        if(A[0] == P[0] || A[1] == P[1])
        {
            c = 1;
            printf("YES\n");
            break;
        }
    }

    if(c == 0)
        printf("NO\n");

    return 0;
}
