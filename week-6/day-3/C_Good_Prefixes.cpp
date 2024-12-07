#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mx = 0;
        ll sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            mx = max(mx, a[i]);
            if (sum - mx == mx)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}