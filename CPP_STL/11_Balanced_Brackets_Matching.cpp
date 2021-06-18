/*stack is used */
#include <bits/stdc++.h>
using namespace std;

// string isBalanced2(string s);

unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};
string isBalanced(string s)
{
    stack<char> st;
    for (char brackets : s)
    {
        if (symbols[brackets] < 0)
        {
            st.push(brackets);
        }
        else
        {
            if (st.empty())
                return "No";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[brackets] != 0)
            {
                return "N0";
            }
        }
    }

    if (st.empty())
        return "Yes";
    return "No";

    // if(s[i]=='[' || s[i]=='{' || s[i]=='(')
    // if(s[i]==']' && st.top()=='[')
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}

// string isBalanced2(string s)
// {
//     stack<char> sk;
//     for (char str : s)
//     {
        
//             if (str == '{' || str == '[' || str == '(')
//             {
//                 sk.push(str);
//             }
//             else if (str == ']' and sk.top() == '[')
//             {
//                 sk.pop();
//             }
//             else if (str == '}' and sk.top() == '{')
//             {
//                 sk.pop();
//             }
//             else if (str == ')' and sk.top() == '(')
//             {
//                 sk.pop();
//             }
//             else
//             {
//                 return "No";
//             }
        
//     }
//     if (sk.empty())
//             return "Yes";
//             return "No";
// }
