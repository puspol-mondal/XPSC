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
        int x, y;
        cin >> x >> y;
        int ans1 = x % 3;
        int ans2 = y % 3;
        int ans = min(ans1, ans2);
        cout << ans << "\n";
    }

    return 0;
}