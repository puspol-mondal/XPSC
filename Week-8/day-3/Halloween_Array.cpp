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
        int n;
        cin >> n;
        long long l, r;
        cin >> l >> r;
        long long a;
        cin >> a;
        long long xorr = a;
        for (int i = 1; i < n; i++)
        {
            long long x;
            cin >> x;
            xorr = (xorr ^ x);
        }

        if (xorr >= l && xorr <= r)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}