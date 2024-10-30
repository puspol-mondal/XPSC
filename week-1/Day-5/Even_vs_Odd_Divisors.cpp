#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int e_cnt, o_cnt;

        e_cnt = 0;
        o_cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    e_cnt++;
                }
                else
                {
                    o_cnt++;
                }
            }
        }
        if (e_cnt > o_cnt)
        {
            cout << 1 << endl;
        }
        else if (e_cnt == o_cnt)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}