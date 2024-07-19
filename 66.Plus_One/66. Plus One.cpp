#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while (true)
        {
            digits[i]++;
            if (digits[i] == 10) {
                digits[i] = 0;
                if (i != 0) i--;
                else
                {
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
            else break;
        }
        return digits;
    }
};

int main()
{
    Solution s;
    vector<int>digits = { 9 };
    vector<int>result = s.plusOne(digits);
    for (auto it : digits) {
        cout << it << " ";
    }
}