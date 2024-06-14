#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int tmp = 0, p = 0, i = 0;
        for (i; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[p]) {
                tmp++;
                p++;
            }
            else {
                i = i - tmp;
                tmp = 0;
                p = 0;
            }
            if (tmp == needle.size())
            {
                int result = i - needle.size() + 1;
                return result;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    string HAYSTACK = "leetcode";
    string NEEDLE = "leeto";
    cout << s.strStr(HAYSTACK, NEEDLE);
}