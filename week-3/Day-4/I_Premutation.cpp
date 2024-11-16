#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n + 5][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> ar[i][j];
            }
        }
        map<int, int> mp;
        map<int, int> mp1;
        for (int i = 1; i <= n; i++)
        {
            mp[ar[i][n - 1]] = i;
            mp1[ar[i][n - 1]]++;
        }
        int idx = 0, val;
        for (auto x : mp1)
        {
            if (x.second == 1)
                idx = x.first;
            else
                val = x.first;
        }
        for (int i = 1; i < n; i++)
        {
            cout << ar[mp[idx]][i] << " ";
        }
        cout << val << endl;
    }
    return 0;
}