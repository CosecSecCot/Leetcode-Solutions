#include <iostream>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int> &gain) {
        int ans = 0;
        int sum = 0;
        for (int i : gain) {
            ans = max(ans, sum);
            sum += i;
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
