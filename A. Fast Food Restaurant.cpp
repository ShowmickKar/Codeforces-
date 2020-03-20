#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, b, c, max = 0;
        cin >> a >> b >> c;
        int array[3];
        array[0] = a;
        array[1] = b;
        array[2] = c;
        sort(array, array + 3);
        a = array[2];
        b = array[1];
        c = array[0];

        if(a > 0)
        {
            a--;
            max++;
        }
        if(b > 0)
        {
            b--;
            max++;
        }
        if(c > 0)
        {
            c--;
            max++;
        }

        if((a > 0) && (b > 0))
        {
            a--;
            b--;
            max++;
        }
        if((b > 0) && (c > 0))
        {
            b--;
            c--;
            max++;
        }
        if((c > 0) && (a > 0))
        {
            c--;
            a--;
            max++;
        }

        if((a > 0) && (b > 0) && (c > 0))
        {
            a--;
            b--;
            c--;
            max++;
        }

        cout << max << endl;
    }

    return 0;
}
