#include <stdio.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(array[i] == 1)
        {
            c = 1;
            printf("HARD\n");
            break;
        }
    }

    if(c == 0)
        printf("EASY\n");

    return 0;
}
