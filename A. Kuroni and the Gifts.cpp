#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> A(n), B(n);
        for(int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }
        for(int i = 0; i < B.size(); i++)
        {
            cin >> B[i];
        }

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        for(int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < B.size(); i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
