#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string> mp;
    int n;
    cin >> n;
    string nm[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nm[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[nm[i]] == "")
        {
            cout << nm[i] << endl;
        }
        mp[nm[i]] = nm[i];
    }
    return 0;
}