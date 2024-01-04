#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
        int max_candies = candies[1];
        vector<bool> ans;

        for (int i = 0; i < candies.size(); i++) {
            max_candies = max(max_candies, candies[i]);
        }

        for (auto candy : candies) {
            if (candy + extraCandies >= max_candies)
                ans.push_back(true);
            else
                ans.push_back(false);
        }

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}
