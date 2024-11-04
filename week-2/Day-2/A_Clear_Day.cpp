#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        int ans = 7 - x - y;
        cout << ans << "\n";
    }
    else
    {
        int ans = 7 - y - x;
        cout << ans << "\n";
    }

    return 0;
}