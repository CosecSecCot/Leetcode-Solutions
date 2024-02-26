#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        stack<int> stk;
        for (int i = 0; i < asteroids.size(); i++) {
            if (stk.empty()) {
                stk.push(asteroids[i]);
                continue;
            }

            if ((stk.top() > 0 && asteroids[i] > 0) || (stk.top() < 0 && asteroids[i] < 0) ||
                (stk.top() < 0 && asteroids[i] > 0)) {
                stk.push(asteroids[i]);
                continue;
            } else {
                // cout << "yes";
                if (stk.top() > abs(asteroids[i])) {
                    continue;
                } else if (stk.top() == abs(asteroids[i])) {
                    stk.pop();
                } else {
                    while (!stk.empty() && stk.top() < abs(asteroids[i]) && stk.top() > 0) {
                        stk.pop();
                    }
                    if (stk.empty()) {
                        stk.push(asteroids[i]);
                    } else if (stk.top() < 0) {
                        stk.push(asteroids[i]);
                    } else if (stk.top() == abs(asteroids[i])) {
                        stk.pop();
                    }
                }
            }
        }

        vector<int> ans;
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;
    vector<int> ast = {1, -1, -2, -2};
    vector<int> sol = solution.asteroidCollision(ast);
    for (auto s : sol) {
        cout << s << ' ';
    }

    return 0;
}
