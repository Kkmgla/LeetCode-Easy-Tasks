#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxAscendingSubarraySum = nums[0];
        int currAscendingSubarraySum = nums[0];
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1]) currAscendingSubarraySum += nums[i + 1];
            else
            {
                if (maxAscendingSubarraySum < currAscendingSubarraySum) maxAscendingSubarraySum = currAscendingSubarraySum;
                currAscendingSubarraySum = nums[i + 1];
            }
        }
        if (currAscendingSubarraySum > maxAscendingSubarraySum) return currAscendingSubarraySum;
        return maxAscendingSubarraySum;
    }
};

int main()
{
    Solution s;
    vector<int> nums{ 10,20,30,30,30,10,70,50 };
    s.maxAscendingSum(nums);
}