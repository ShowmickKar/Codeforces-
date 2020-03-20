#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, d;
        cin >> n >> d;
        vector <int> A(n);
        for(int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        while(d--)
        {
            for(int i = 1; i < A.size(); i++)
            {
                if(A[i] > 0)
                {
                    A[i]--;
                    A[i - 1]++;
                    break;
                }
            }
        }

        cout << A.front() << endl;
    }
}
