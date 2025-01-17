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
        ll arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll min1 = arr[0], index = n + 1;

        vector<ll> v;
        v.push_back(min1);
        for (int i = 1; i < n; i++)
        {
            if (min1 <= arr[i])
            {
                min1 = arr[i];
                v.push_back(min1);
            }
            else
            {
                index = i;
                break;
            }
        }
        vector<ll> ans;
        for (int i = index; i < n; i++)
        {
            ans.push_back(arr[i]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(arr[i]);
        }

        if (is_sorted(ans.begin(), ans.end()))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}