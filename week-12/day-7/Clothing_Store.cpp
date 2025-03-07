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
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;

        int ans = 0;

        ans += min(x, a);
        a -= min(x, a);

        ans += min(y, b);
        b -= min(y, b);

        ans += min(z, c);
        c -= min(z, c);

        ans += min(z, b);
        b -= min(z, b);

        ans += min(z, a);
        a -= min(z, a);

        ans += min(y, a);

        cout << ans << endl;
    }

    return 0;
}