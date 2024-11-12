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
        int l = 0;
        int r = n - 1;
        int ans = n - 1;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                cout << ans << "\n";
                break;
            }
            else
            {
                l++;
                r--;
                ans--;
            }
        }
    }

    return 0;
}