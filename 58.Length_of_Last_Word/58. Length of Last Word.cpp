#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;
        bool flag = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && flag) return counter;
            if (s[i] == ' ') continue;
            else
            {
                counter++;
                flag = 1;
            }
        }
        return counter;
    }
};

int main()
{
    Solution sol;
    string s = "        fdff df  aa  l l dl    fg moon    ";
    cout << sol.lengthOfLastWord(s);
}