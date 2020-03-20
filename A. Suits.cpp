#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int max = 0;
    if(f >= e)
    {
        while(b != 0 && c != 0 && d != 0)
        {
            max += f;
            b--;
            c--;
            d--;
        }

        while(a != 0 && d!= 0)
        {
            max += e;
            a--;
            d--;
        }
    }
    else
    {
        while(a != 0 && d!= 0)
        {
            max += e;
            a--;
            d--;
        }

        while(b != 0 && c != 0 && d != 0)
        {
            max += f;
            b--;
            c--;
            d--;
        }
    }

    cout << max << endl;

    return 0;
}
