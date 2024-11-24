#include <bits/stdc++.h>
using namespace std;
#define MAX_VAL 100000
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    int cnt = 0;
    vector<int> v(MAX_VAL + 1, 0);
    ll ans = 0;

    while (r < n)
    {
        if (v[a[r]] == 0)
        {
            cnt++;
        }
        v[a[r]]++;

        while (cnt > k)
        {
            v[a[l]]--;
            if (v[a[l]] == 0)
            {
                cnt--;
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << endl;
}