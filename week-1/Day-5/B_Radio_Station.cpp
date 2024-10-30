// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, m;
//     cin >> n >> m;
//     while (n--)
//     {
//         map<string, string> mp;
//         for (int i = 0; i < m; i++)
//         {
//             string name, ip;
//             cin >> name >> ip;
//             mp[name] = ip;
//             mp[ip] = name;
//             auto it = mp.find(ip);
//             if (it->first != ip)
//             {
//                 mp[name] = ip;
//                 mp[ip] = name;
//             }
//             else
//             {
//                 cout << name << " " << ip << ";" << " #" << it->second << "\n";
//             }
//         }
//     }

//     return 0;
// }