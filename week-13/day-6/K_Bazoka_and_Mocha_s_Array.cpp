#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool solve(vector<int> &a)
{
    vector<int> v = a;
    sort(v.begin(), v.end());
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (a[(i + j) % n] != v[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (solve(a))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}