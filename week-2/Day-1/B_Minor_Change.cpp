#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<char> ch;
    string a;
    cin >> a;
    string b;
    cin >> b;
    for (int i = 0; i < a.size(); i++)
    {
        ch.push_back(a[i]);
    }
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] != a[i])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}