#include <iomanip>
#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int> &nums, int k) {
        queue<int> window;
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            window.push(nums[i]);
            sum += window.back();
        }

        double average = double(sum) / k;
        for (int i = k; i < nums.size(); ++i) {
            window.push(nums[i]);
            sum += window.back();
            // cout << window.back() << ' ' << sum << ' ' << average << ' ' << window.size() << '\n';

            if (window.size() > k) {
                sum -= window.front();
                window.pop();
            }

            average = max(average, double(sum) / k);
        }
        cout << setprecision(8) << average;
        return average;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;
    vector<int> nums = {8860,  -853,  6534,  4477,  -4589, 8646, -6155, -5577, -1656, -5779, -2619, -8604, -1358, -8009,
                        4983,  7063,  3104,  -1560, 4080,  2763, 5616,  -2375, 2848,  1394,  -7173, -5225, -8244, -809,
                        8025,  -4072, -4391, -9579, 1407,  6700, 2421,  -6685, 5481,  -1732, -8892, -6645, 3077,  3287,
                        -4149, 8701,  -4393, -9070, -1777, 2237, -3253, -506,  -4931, -7366, -8132, 5406,  -6300, -275,
                        -1908, 67,    3569,  1433,  -7262, -437, 8303,  4498,  -379,  3054,  -6285, 4203,  6908,  4433,
                        3077,  2288,  9733,  -8067, 3007,  9725, 9669,  1362,  -2561, -4225, 5442,  -9006, -429,  160,
                        -9234, -4444, 3586,  -5711, -9506, -79,  -4418, -4348, -5891};
    solution.findMaxAverage(nums, 93);

    return 0;
}
