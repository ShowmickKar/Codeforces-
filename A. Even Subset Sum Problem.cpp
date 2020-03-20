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
        int n, test = 0;
        cin >> n;
        vector <int> A(n);
        for(int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        if((n == 1) && (A[0] % 2 != 0))
            cout << "-1\n";
        else
        {
            for(int i = 0; i < A.size(); i++)
            {
                if(A[i] % 2 == 0)
                {
                    test = 1;
                    cout << "1\n" << i + 1 << endl;
                    break;
                }
            }

            if(test == 0)
            {
                for(int i = 0; i < A.size() - 1; i++)
                {
                    for(int j = i + 1; j < A.size(); j++)
                    {
                        if((A[i] % 2 != 0) && (A[j] % 2 != 0))
                        {
                            cout << "2\n" << i + 1 << " " << j + 1 << endl;
                            break;
                        }
                    }

                    break;
                }
            }
        }
    }

    return 0;
}
