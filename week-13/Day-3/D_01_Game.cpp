#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> stack;
        for (char ch : s)
        {
            if (!stack.empty() && stack.back() != ch)
            {
                stack.pop_back();
            }
            else
            {
                stack.push_back(ch);
            }
        }
        int moves = (s.length() - stack.size()) / 2;
        if (moves % 2 == 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
    return 0;
}