#include <iostream>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int> nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum == k) {
                count++;
                i++;
                j--;
            } else if (sum < k) {
                i++;
            } else {
                j--;
            }
        }
        return count;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;

    return 0;
}
