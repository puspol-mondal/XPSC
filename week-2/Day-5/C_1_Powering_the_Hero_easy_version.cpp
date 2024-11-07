#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, ans = 0;
        cin >> n;
        priority_queue<ll> q;
        for (i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > 0)
            {
                q.push(x);
            }
            else if (x == 0 && q.size() == 0)
            {
                continue;
            }
            else
            {
                ans += q.top();
                q.pop();
            }
        }
        cout << ans << "\n";
    }
    return 0;
}