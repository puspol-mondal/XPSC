#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        if (s1 == s2 && s1 == s3)
        {
            cout << 0 << "\n"; // Already same
            continue;
        }

        int swaps_to_zeros = 0, swaps_to_ones = 0;
        bool impossible = false;

        for (int i = 0; i < n; i++)
        {
            int count_ones = (s1[i] - '0') + (s2[i] - '0') + (s3[i] - '0');
            if (count_ones == 1 || count_ones == 2)
            {
                swaps_to_zeros++;
                swaps_to_ones++;
            }
            else if (count_ones == 3 || count_ones == 0)
            {
                continue; // Already uniform at this index
            }
            else
            {
                impossible = true;
                break;
            }
        }

        if (impossible)
            cout << -1 << "\n";
        else
            cout << min(swaps_to_zeros, swaps_to_ones) << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
