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
        int count_0 = 0;
        int count_1 = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '0')
            {
                count_0++;
                i++;
                while (i < n && s[i] == '0')
                {
                    i++;
                }
            }
            else
            {
                count_1++;
                i++;
                while (i < n && s[i] == '1')
                {
                    i++;
                }
            }
        }
        int ans = min(count_0, count_1);
        cout << ans << "\n";
    }

    return 0;
}