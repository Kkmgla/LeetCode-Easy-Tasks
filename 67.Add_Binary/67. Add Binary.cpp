#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {

        string result = "";
        bool lastCharOne = 0;
        if (a.size() > b.size())
        {
            reverse(b.begin(), b.end());
            int stockSize = a.size() - b.size();
            for (int i = 0; i < stockSize; i++)
            {
                b.append("0");
            }
            reverse(b.begin(), b.end());
        }
        else if(a.size() < b.size()) {
            reverse(a.begin(), a.end());
            int stockSize = b.size() - a.size();
            for (int i = 0; i < stockSize; i++)
            {
                a.append("0");
            }
            reverse(a.begin(), a.end());
        }

        int i = a.size() - 1;
        while (i >= 0)
        {
            if (lastCharOne)
            {
                if (a[i] == '0' && b[i] == '0')
                {
                    result.append("1");
                    lastCharOne = 0;
                }
                else if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
                {
                    result.append("0");
                }
                else if (a[i] == '1' && b[i] == '1')
                {
                    result.append("1");
                }
            }
            else
            {
                if (a[i] == '0' && b[i] == '0')
                {
                    result.append("0");
                }
                else if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
                {
                    result.append("1");
                }
                else if (a[i] == '1' && b[i] == '1')
                {
                    result.append("0");
                    lastCharOne = 1;
                }
            }
            i--;
        }
        if (lastCharOne == 1) result.append("1");

        /*
        else
        {
            if (a.size() >= b.size())
            {
                for (i; i >= 0; i--)
                {
                    result.append(to_string(a[i]));
                }
            }
            else
            {
                for (j; j >= 0; j--)
                {
                    result.append(to_string(a[j]));
                }
            }
        }
        */

        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution s;
    string a = "1111", b = "1111";
    cout << s.addBinary(a, b);
}
//           1010
//       10110101
//       10111111

// 111110111
//    110111