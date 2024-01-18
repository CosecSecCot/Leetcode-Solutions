#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int> &nums, int k) {
        queue<int> window;
        int zero_count = 0;
        int i = 0;
        int ans = 0;
        while (zero_count < k && i < nums.size()) {
            if (nums[i] == 0) {
                // cout << "Im a zero\n";
                zero_count++;
            }
            cout << nums[i] << ' ';
            window.push(nums[i]);
            i++;
        }
        ans = window.size();
        while (i < nums.size()) {
            if (zero_count >= k) {
                cout << "\ndeleting: [";
                while (window.front() != 0) {
                    cout << window.front() << ' ';
                    window.pop();
                }
                cout << window.front() << "]\n";
                window.pop();
                zero_count--;
            }
            if (nums[i] == 0) {
                // cout << "Im a zero\n";
                zero_count++;
            }
            cout << nums[i] << ' ';
            window.push(nums[i]);
            i++;
            int curr = window.size();
            ans = max(ans, curr);
        }

        cout << '\n' << ans;
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    solution.longestOnes(nums, 2);

    return 0;
}
