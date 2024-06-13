#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        
        int i = 0;
        for (int p = 1; p < nums.size(); p++) {
            if (nums[p] != nums[i]) { 
                i++;
                nums[i] = nums[p];
            }
        }
        for (auto it : nums) {
            cout << it << " ";
        }
        return i += 1;
    }
};

int main()
{
    vector<int> nums = { 0, 0, 0, 1, 1, 2, 2, 3, 4, 5 };
    vector<int> nums1 = { 1, 1};
    vector<int> expectedNums = { 0, 1, 2, 3, 4, 5 };
    Solution s;
    int k = s.removeDuplicates(nums1); // Calls your implementation
    cout << endl << k;
}