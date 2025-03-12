#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int curr = abs(x - y);

        if (k > x + y)
        {
            cout << "-1\n";
        }
        else if (curr == k)
        {
            cout << "0\n";
        }
        else
        {
            int dif = abs(curr - k);
            if (dif % 2 == 0)
            {
                cout << dif / 2 << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}