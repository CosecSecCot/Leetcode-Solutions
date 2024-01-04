const vowels = new Set(['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']);
/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function (s) {
    let j = s.length - 1;
    let ans = '';
    for (let i = 0; i < s.length; i++) {
        if (vowels.has(s[i])) {
            // console.log('vowel : ', s[i]);
            // console.log('search started: ', s[j]);
            while (!vowels.has(s[j]) && j >= 0) {
                // console.log('searching : ', s[j]);
                j--;
            }
            ans += s[j];
            j--;
        } else {
            ans += s[i];
        }
        // console.log(ans);
    }

    return ans;
};

let ans = reverseVowels('leetcode');
console.log('ans: ', ans);
