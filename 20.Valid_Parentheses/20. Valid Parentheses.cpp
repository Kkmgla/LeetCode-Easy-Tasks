#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*
string symmetric(string s) {
    return s.substr(1, s.length() - 2);
}

string unssymetric(string s) {
    return s.substr(2, s.length() - 1);
}

string huetric(string s) {

}

class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;
        while (!s.empty())
        {
            if ((s[0] == '{' && s[1] == '}') || (s[0] == '(' && s[1] == ')') || (s[0] == '[' && s[1] == ']')) {
                s = unssymetric(s);
            }
            else if ((s[0] == '{' && s[s.size() - 1] == '}') || (s[0] == '(' && s[s.size() - 1] == ')') || (s[0] == '[' && s[s.size() - 1] == ']')) {
                s = symmetric(s);
            }
            else if() {
                s = huetric(s);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];


            if (ch == '(' || ch == '{' || ch == '[') st.push(ch);

            else {

                if (!st.empty())
                {
                    char top = st.top();
                    if ((ch == ')' && top == '(') ||
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '['))
                    {

                        st.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if (st.empty()) return true;

        return false;
    }
};
// { [ ( {} ) ] }
// {} [] () [] {}
// {} [] () {}
// ( ( [ ] ) { } )
//   ( [ ] ) { }
//   ( [ () {()} ] {} )       { }
//   

int main()
{
    Solution s;
    string str = "[({})]";
    cout << s.isValid(str);
}

