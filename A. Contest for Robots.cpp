#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n, count;
    scanf("%d", &n);
    vector <int> r(n);
    vector <int> b(n);
    for(int i = 0; i < r.size(); i++)
    {
        cin >> r[i];
    }
    for(int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    int sum = accumulate(r.begin(), r.end(), 0);
    int s = accumulate(b.begin(), b.end(), 0);
    if(sum > s)
        cout << "1\n";
    else
    {
        count = 0;
        for(int i = 0; i < n; i++)
        {
            if((r[i] == 1) && (b[i] == 0))
            {
                count++;
            }
        }

        int cnt = count;
        if(cnt == 0)
            cout << "-1\n";
        else
        {
            int initial = 1;
            while(1)
            {
                sum += cnt;
                initial++;
                if(sum > s)
                    break;
            }

            cout << initial << endl;
        }
    }

    return 0;
}
