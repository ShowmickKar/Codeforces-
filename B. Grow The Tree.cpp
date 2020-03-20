#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long x = 0, y = 0;
    scanf("%d", &n);
    vector <long long> A(n);
    for(int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    int limit;
    limit = n/2;

    for(int i = 0; i < limit; i++)
    {
        y += A[i];
    }
    //cout << y << endl;
    for(int i = limit; i < n; i++)
    {
        x += A[i];
    }
    //cout << x << endl;

    cout << x*x + y*y << endl;

    return 0;
}
