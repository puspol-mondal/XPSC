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
        ll ans = 0;
        cin >> n;
        priority_queue<ll> pq;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a > 0)
            {
                pq.push(a);
            }
            else if (a == 0 && pq.size() == 0)
            {
                continue;
            }

            else
            {
                ans += pq.top();
                pq.pop();
            }
        }

        cout << ans << "\n";
    }

    return 0;
}