#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    int count = 0;
    while (l <= r)
    {
        if (s[l] == s[r])
        {
            break;
        }

        count = count + 2;
        l++;
        r--;
    }
    cout << s.size() - count << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}