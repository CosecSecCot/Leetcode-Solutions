/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
    let reversedArray = s.trim().split(' ').reverse();
    return reversedArray
        .filter((x) => {
            return x != '';
        })
        .join(' ')
        .trim();
};

let ans = reverseWords('a good   example');
console.log(ans);
