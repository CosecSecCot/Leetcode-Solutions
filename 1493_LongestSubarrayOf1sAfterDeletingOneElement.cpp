#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums) {
        queue<int> window;
        int zero_count = 0;
        int i = 0;
        int ans = 0;
        while (zero_count < 1 && i < nums.size()) {
            if (nums[i] == 0) {
                // cout << "Im a zero\n";
                zero_count++;
            }
            cout << nums[i] << ' ';
            window.push(nums[i]);
            i++;
        }
        ans = window.size() - 1;
        while (i < nums.size()) {
            if (nums[i] == 0) {
                // cout << "Im a zero\n";
                zero_count++;
            }
            if (zero_count > 1) {
                cout << "\ndeleting: [";
                while (window.front() != 0) {
                    cout << window.front() << ' ';
                    window.pop();
                }
                cout << window.front() << "]\n";
                window.pop();
                zero_count--;
            }
            cout << nums[i] << ' ';
            window.push(nums[i]);
            i++;
            int curr = window.size();
            ans = max(ans, curr - 1);
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

    return 0;
}
