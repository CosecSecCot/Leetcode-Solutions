#include <iostream>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    map<char, bool> vowel = {
        {'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true},
    };

    int maxVowels(string s, int k) {
        queue<char> window;
        int vowel_count = 0;
        for (int i = 0; i < k; i++) {
            if (vowel[s[i]]) {
                window.push(s[i]);
            }
        }
        vowel_count = window.size();
        for (int i = k; i < s.length(); i++) {
            if (vowel[s[i]]) {
                window.push(s[i]);
            }

            if (vowel[s[i - k]]) {
                window.pop();
            }

            int curr_vowels = window.size();
            vowel_count = max(vowel_count, curr_vowels);
            // cout << vowel_count << '\n';
        }
        cout << vowel_count;
        return vowel_count;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution solution;
    string s = "aeiou";
    solution.maxVowels(s, 2);

    return 0;
}
