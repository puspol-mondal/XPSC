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

        int z;
        cin >> z;
        z = (z * 24) * 60;
        int ans = x * y;
        if (ans <= z)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}