#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        int curr = a[l], count1 = 0, count2 = 0;
        while (l < n && a[l] == curr)
        {
            l++;
            count1++;
        }
        while (r < m && b[r] < curr)
        {
            r++;
        }

        while (r < m && b[r] == curr)
        {
            r++;
            count2++;
        }
        ans += (1LL * count1 * count2);
    }
    cout << ans;

    return 0;
}