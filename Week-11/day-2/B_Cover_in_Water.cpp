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
        string s;
        cin >> s;
        int ans = 0;
        int f = 0;
        if (s[0] == '.')
        {
            ans++;
            f = 0;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '#')
                {
                    f = 0;
                }
                else
                {
                    f++;
                }
                if (f > 1)
                {
                    ans++;
                    f = 0;
                }
            }
        }
        else
        {
            ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '#')
                {
                    f = 0;
                }
                else
                {
                    f++;
                }
                if (f > 1)
                {
                    ans++;
                    f = 0;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}