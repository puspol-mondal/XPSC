#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        v[0] += 1;
        ll ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans *= v[i];
        }
        cout << ans << endl;
    }
    return 0;
}