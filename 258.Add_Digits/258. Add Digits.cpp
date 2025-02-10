#include <iostream>

using namespace std;

class Solution {
public:
	int addDigits(int num) {
		if (num >= 0 && num <= 9) return num;
		int tmp = 0;
		while (num != 0)
		{
			tmp += num % 10;
			num = num / 10;
		}
		return addDigits(tmp);
    }
};

int main()
{
	Solution s;
	int num = 38;
	cout << s.addDigits(num);
}