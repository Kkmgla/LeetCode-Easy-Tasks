//Given an integer x, return true if x is a palindrome, and false otherwise.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string numStr = to_string(x);
        bool flag1 = 1;
        if (numStr.length() == 1) return flag1;
        int j = numStr.length() - 1;
        for (int i = 0; i < numStr.length(); i++)
        {
            for (j; j >= 0; j--)
            {
                if (numStr[i] == numStr[j]) {
                    j--;
                    break;
                }
                else flag1 = 0;
            }
            if (!flag1) break;
            else if (i == ceil(x/2)) break;
        }
        return flag1;
    }
};

int main()
{
    Solution s;
    bool result = s.isPalindrome(1);
    cout << result;
}