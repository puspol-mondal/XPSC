#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int A = a + (a - 1);
    int B = b + (b - 1);
    int AB = a + b;
    int mx = max(A, B);
    int m_ax = max(mx, AB);
    cout << m_ax;
    return 0;
}