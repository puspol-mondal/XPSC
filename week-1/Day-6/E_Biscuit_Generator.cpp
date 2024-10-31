#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    for (int i = a; i <= t; i = i + a)
    {
        ans += b;
    }
    cout << ans;

    return 0;
}