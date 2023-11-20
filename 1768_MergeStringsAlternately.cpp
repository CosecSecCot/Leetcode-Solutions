#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int letter1 = 0, letter2 = 0;
        for (; letter1 < word1.length() && letter2 < word2.length(); letter1++, letter2++) {
            ans.push_back(word1[letter1]);
            ans.push_back(word2[letter2]);
        }
        if (word1.length() > word2.length())
            ans += word1.substr(letter2);
        else if (word1.length() < word2.length())
            ans += word2.substr(letter1);

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;
    cout << solution.mergeAlternately("ab", "pqrs");

    return 0;
}
