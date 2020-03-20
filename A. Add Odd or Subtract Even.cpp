#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
 
        if(a == b)
            printf("0\n");
        else if(((a > b) && (a - b)%2 != 0) || ((a < b) && (b - a)%2 == 0))
            printf("2\n");
        else
            printf("1\n");
    }
 
    return 0;
}