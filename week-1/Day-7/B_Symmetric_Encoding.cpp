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
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        vector<char> v;
        map<char, char> mp;
        for (auto x : st)
        {
            v.push_back(x);
        }
        if (st.size() % 2 == 0)
        {
            int sz = st.size();
            for (int i = 1; i <= sz / 2; i++)
            {
                mp[v[i - 1]] = v[sz - i + 1 - 1];
            }
            reverse(v.begin(), v.end());

            for (int i = 1; i <= sz / 2; i++)
            {
                mp[v[i - 1]] = v[sz - i + 1 - 1];
            }
            for (int i = 0; i < n; i++)
            {
                cout << mp[s[i]];
            }
            cout << endl;
        }
        else
        {
            int sz = st.size();
            for (int i = 1; i <= sz / 2; i++)
            {
                mp[v[i - 1]] = v[sz - i + 1 - 1];
            }
            mp[v[sz / 2]] = v[sz / 2];
            reverse(v.begin(), v.end());

            for (int i = 1; i <= sz / 2; i++)
            {
                mp[v[i - 1]] = v[sz - i + 1 - 1];
            }
            for (int i = 0; i < n; i++)
            {
                cout << mp[s[i]];
            }
            cout << endl;
        }
    }
    return 0;
}