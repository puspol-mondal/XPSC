#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = n / 4;
    int f = ans * 4;
    if (n == f)
    {
        cout << ans << "\n";
    }
    else
    {
        cout << ans + 1 << "\n";
    }

    return 0;
}