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
        int ans = n;
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                break;
            }
            l++;
            r--;
            ans = ans - 2;
        }
        cout << ans << "\n";
    }

    return 0;
}