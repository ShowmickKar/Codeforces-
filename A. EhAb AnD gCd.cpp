#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x;
        scanf("%d", &x);
        if(x == 2)
            printf("1 1\n");
        else if(x == 14)
            printf("6 4\n");
        else
            printf("%d %d\n", 1, x - 1);
    }

    return 0;
}
