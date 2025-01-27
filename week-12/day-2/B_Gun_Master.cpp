#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= d && !flag)
            {
                cnt++;
                flag = true;
            }
            else if (a[i] > d && flag)
            {
                cnt++;
                flag = false;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}