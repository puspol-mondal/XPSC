#include <bits/stdc++.h>>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int p;
    cin >> p;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int tmp = p ^ arr[i];
        int tmp_cnt = 0;
        while (tmp > 0)
        {
            if (tmp & 1)
            {
                tmp_cnt++;
                if (tmp_cnt > k)
                {
                    break;
                }
            }
            tmp >>= 1;
        }
        if (tmp_cnt <= k)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}