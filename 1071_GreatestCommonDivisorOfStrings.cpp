#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        int t = gcd(str1.length(), str2.length());
        return str1.substr(0, t);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    cout << sol.gcdOfStrings("ABACABACDABACABACDABACABACD", "ABACABACDABACABACD");

    return 0;
}
