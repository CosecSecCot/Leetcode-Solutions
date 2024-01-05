#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int> &nums) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for (int num : nums) {
            if (num <= min1) {
                min1 = num;
            } else if (num <= min2) {
                min2 = num;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;
    vector<int> nums = {5, 4, 3, 2, 1};
    bool ans = solution.increasingTriplet(nums);
    cout << ans;

    return 0;
}
