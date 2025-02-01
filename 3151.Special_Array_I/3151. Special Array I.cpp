#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 0) return 1;
        else if (nums.size() == 1) return 1;
        int i = 0;
        while (i + 1 < nums.size())
        {
            if (!(((nums[i] % 2 == 0) && (nums[i + 1] % 2 != 0)) || ((nums[i + 1] % 2 == 0) && (nums[i] % 2 != 0))))
            {
                return 0;
            }
            i++;
        }
        return 1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout << s.isArraySpecial(nums);
}