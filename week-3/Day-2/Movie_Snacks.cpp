#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;

    int cost1 = 2 * x + 3 * y;
    int cost2 = 2 * z + y;
    int cost3 = 3 * z;
    int ans = min({cost1, cost2, cost3});
    cout << ans;

    return 0;
}