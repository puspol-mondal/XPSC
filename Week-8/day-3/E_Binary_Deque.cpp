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
        int n, s, sum = 0;
        cin >> n >> s;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum < s)
            cout << -1 << endl;
        else if (sum == s)
            cout << 0 << endl;
        else
        {
            int cs = 0, l = 0, r = 0, mn = INT_MAX;

            while (r < n)
            {
                cs += v[r];

                while (cs > s)
                {
                    cs -= v[l];
                    l++;
                }

                if (cs == s)
                    mn = min(mn, n - (r - l + 1));

                r++;
            }

            cout << mn << endl;
        }
    }

    return 0;
}