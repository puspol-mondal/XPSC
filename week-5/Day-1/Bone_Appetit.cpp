#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int Bones = n * x;
    int Blood = m * y;
    cout << Bones + Blood << "\n";

    return 0;
}