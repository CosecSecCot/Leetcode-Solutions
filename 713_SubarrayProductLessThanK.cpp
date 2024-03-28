#include <cmath>
#include <iostream>
#include <queue>
using namespace std;

void print_queue(std::queue<int> q) {
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k) {
        long product = 1;
        int ans = 0;
        int left = 0;
        int right = 0;

        if (k <= 1) {
            return 0;
        }

        while (right < nums.size()) {
            product *= nums[right];
            while (product >= k) {
                product /= nums[left];
                left++;
            }
            ans += 1 + (right - left);
            right++;
        }

        return ans;
    }
};

int main() { return 0; }
