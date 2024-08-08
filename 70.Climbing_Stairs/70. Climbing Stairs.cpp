#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n < 4) return n;
        int curr = 0, prepre = 2, pre = 3;
        for (int i = 4; i <= n; i++)
        {
            curr = pre + prepre;
            prepre = pre;
            pre = curr;
        }
        return curr;
    }
};

int main()
{
    Solution s;
    cout << s.climbStairs(6);
}
/*
1   
1                   1

2
1 1                 2
2

3
1 1 1
2 1                 3
1 2

4
1 1 1 1
1 2 1
2 1 1               5
1 1 2
2 2

5
1 1 1 1 1
1 1 1 2
1 1 2 1
1 2 1 1             8
2 1 1 1
2 2 1
1 2 2
2 1 2

6
1 1 1 1 1 1
1 1 1 1 2
1 1 1 2 1
1 1 2 1 1
1 2 1 1 1
2 1 1 1 1
1 1 2 2             13
1 2 1 2
1 2 2 1
2 1 1 2
2 1 2 1
2 2 1 1
2 2 2

geometric progression
*/