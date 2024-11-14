#include <bits/stdc++.h>
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
    int sz = b.size() - 1;
    int ans = 0;
    int l = 0, r = 0;

    while (r < m)
    {

        if (l < n && a[l] < b[r])
        {
            ans++;
            l++;
        }
        else
        {
            cout << l << " ";
            r++;
        }
    }

    return 0;
}