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
            while (find(this->blacklist.begin(), this->blacklist.end(), ans) != this->blacklist.end())
                ans = int(rand() % this->n);

            return ans;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 3;
    vector<int> blacklist = {0};
    Solution *solution = new Solution(n, blacklist);

    for (int i = 0; i < 40; i++)
        cout << solution->pick() << '\n';

    return 0;
}
