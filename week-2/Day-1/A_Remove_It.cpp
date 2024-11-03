#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> v;
    while (n--)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    vector<int> ans;
    for (int h : v)
    {
        if (h != x)
        {
            ans.push_back(h);
        }
    }
    for (int h : ans)
    {
        cout << h << " ";
    }

    return 0;
}