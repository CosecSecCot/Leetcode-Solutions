#include <iostream>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        for (auto ch : s) {
            if (ch == '*') {
                ans.pop_back();
            } else {
                ans.push_back(ch);
            }
        }

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;

    return 0;
}
