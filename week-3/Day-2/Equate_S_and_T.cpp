#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == 'a')
        {
            str1.insert(i, "ab");
            break;
        }
    }

    return 0;
}