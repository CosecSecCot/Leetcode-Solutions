#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> blacklist;
    int n;
    Solution(int n, vector<int> &blacklist) {
        this->n = n;
        this->blacklist = blacklist;
    }

    int pick() {
        if (this->blacklist.size() * 2 > this->n) {
            vector<int> valid;
            for (int i = 0; i < this->n; i++)
                valid.push_back(i);
            for (auto i : blacklist) {
                auto iterator = remove(valid.begin(), valid.end(), i);
                valid.erase(iterator, valid.end());
            }

            return valid[int(rand() % valid.size())];
        } else {
            int ans = int(rand() % this->n);
            auto isInBlacklist =
                find(this->blacklist.begin(), this->blacklist.end(), ans);
            while (isInBlacklist != this->blacklist.end())
                ans = int(rand() % this->n);

            return ans;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 1000000;
    vector<int> blacklist = {1,  3,  5,  7,  9,  11, 13, 15, 17,
                             19, 21, 23, 25, 27, 29, 31, 33, 47};
    Solution *solution = new Solution(n, blacklist);

    for (int i = 0; i < 1000000; i++)
        cout << solution->pick() << '\n';

    return 0;
}
