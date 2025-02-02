#include <iostream>
#include <vector>
using namespace std;




//2 варик чуть лучше по памяти
class Solution {
public:
    bool check(vector<int>& nums) {
        bool checkFlag = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                if (checkFlag) return 0;
                checkFlag = 1;
            }
        }
        if (checkFlag) {
            if (nums[nums.size() - 1] > nums[0]) return 0;
        }
        return 1;
    }
};

class Solution {
public:
    bool check(vector<int>& nums) {
        bool checkFlag = 0;
        int restr = nums.size() - 1;
        for (int i = 0; i < restr; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                if (checkFlag) return 0;
                nums.push_back(nums[0]);
                restr++;
                checkFlag = 1;
            }
        }return 1;
    }
};

int main()
{
	Solution s;
    vector<int> nums{ 2,7,4,1,2,6,2 };
    cout << s.check(nums);
}

/*
class Solution {
public:
    bool check(vector<int>& nums) {
        bool checkFlag = 0;
        int restr = nums.size() - 1;
        for (int i = 0; i < restr; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                if (checkFlag) return 0;
                nums.push_back(nums[0]);
                restr++;
                checkFlag = 1;
            }
        }return 1;
    }
};
*/