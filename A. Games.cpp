#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector <int> x(n), y(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }

    int count = 0;
    for(int i = 0; i < x.size(); i++)
    {
        for(int j = 0; j < y.size(); j++)
        {
            if(x[i] == y[j])
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
