/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];
        if (strs.size() == 0) return "";
        string result = "";
        int minLen = 201;
        char currentChar;
        bool flag = 0;

        for (auto it : strs) {
            if (it.length() < minLen)
            {
                minLen = it.length();
            }
        }
        for (int i = 0; i < minLen; i++)
        {
            for (int j = 0; j < strs.size() - 1; j++)
            {
                if (strs[j][i] != strs[j + 1][i]) {
                    flag = 1;
                    return result;
                }
            }
            result += strs[0][i];
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<string>pref;
    pref.push_back("ab");
    pref.push_back("a");

    cout << s.longestCommonPrefix(pref);
}