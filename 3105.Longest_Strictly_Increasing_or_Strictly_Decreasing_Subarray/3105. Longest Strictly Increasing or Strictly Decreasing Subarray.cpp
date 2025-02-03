#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxMonoticSubarraylength = 1;
        int currMonoticSubarraylength = 0;
        int direction = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                if (direction != 3) currMonoticSubarraylength++;
                if (direction == 1)
                {
                    if (currMonoticSubarraylength > maxMonoticSubarraylength) {
                        maxMonoticSubarraylength = currMonoticSubarraylength;
                    }
                    currMonoticSubarraylength = 1;
                }
                direction = 0;
            }
            else if (nums[i] > nums[i + 1])
            {
                if (direction != 3) currMonoticSubarraylength++;
                if (direction == 0) 
                {
                    if (currMonoticSubarraylength > maxMonoticSubarraylength) {
                        maxMonoticSubarraylength = currMonoticSubarraylength;
                    }
                    currMonoticSubarraylength = 1;
                }
                direction = 1;
            }
            else
            {
                if (direction != 3) currMonoticSubarraylength++;
                if (currMonoticSubarraylength > maxMonoticSubarraylength) {
                    maxMonoticSubarraylength = currMonoticSubarraylength;
                }
                currMonoticSubarraylength = 1;
                direction = 3;
            }
        }

        if (direction != 3) currMonoticSubarraylength++;
        if (currMonoticSubarraylength > maxMonoticSubarraylength) return currMonoticSubarraylength;
        return maxMonoticSubarraylength;
    }
};


int main()
{
    Solution s;
    vector<int> nums = {3,3,3,3};
    cout << s.longestMonotonicSubarray(nums);
}