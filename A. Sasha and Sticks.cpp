#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if((n/k) % 2 == 0)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}
