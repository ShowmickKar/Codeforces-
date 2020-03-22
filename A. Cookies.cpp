#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
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
        int check = accumulate(a.begin(), a.end(), 0) - a[i];
        if(check % 2 == 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
