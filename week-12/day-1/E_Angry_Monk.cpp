#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(k);
        ll ans = 0;

        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < k - 1; i++)
        {
            if (v[i] > 1)
                ans += (v[i] - 1) + v[i];
            else
                ans += 1;
        }
        cout << ans << endl;
    }
}