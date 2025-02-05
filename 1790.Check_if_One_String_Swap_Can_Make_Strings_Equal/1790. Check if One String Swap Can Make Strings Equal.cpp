#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return 1;
        int counter = 0;
        vector <int>positions;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i]) {
                counter++;
                positions.push_back(i);
            }
            if (counter > 2) return 0;
        }
        if (counter != 2) return 0;
        char ch = s2[positions[1]];
        s2[positions[1]] = s2[positions[0]];
        s2[positions[0]] = ch;
        if (s1 == s2) return 1;

        return 0;
    }
};

int main()
{
    Solution s;
    string s1 = "bank";
    string s2 = "kanb";
    cout << s.areAlmostEqual(s1, s2);
}