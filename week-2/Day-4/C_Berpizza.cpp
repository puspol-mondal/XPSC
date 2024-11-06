#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, customerCount = 1;
    cin >> n;
    set<pair<int, int>> st;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            st.insert({customerCount, money});
            ml.insert({money, -customerCount});
            customerCount++;
        }
        else if (type == 2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            ml.erase({money, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos, money});
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}