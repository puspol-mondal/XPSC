#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string input;
        getline(cin, input);
        stack<char> st;
        for (char ch : input)
        {

            if (ch == 'b')
            {
                stack<char> tmp;
                bool found = false;
                while (!st.empty())
                {
                    if (islower(st.top()))
                    {
                        st.pop();
                        found = true;
                        break;
                    }

                    tmp.push(st.top());
                    st.pop();
                }
                while (!tmp.empty())
                {
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
            else if (ch == 'B')
            {
                stack<char> tmp;
                bool found = false;
                while (!st.empty())
                {

                    if (isupper(st.top()))
                    {
                        st.pop();
                        found = true;
                        break;
                    }
                    tmp.push(st.top());
                    st.pop();
                }
                while (!tmp.empty())
                {
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
            else
            {
                st.push(ch);
            }
        }

        string result;
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }
        cout << result << "\n";
    }

    return 0;
}