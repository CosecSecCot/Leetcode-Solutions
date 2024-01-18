/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function (nums) {
    let start = nums[0];
    let ans = [];
    for (let i = 0; i < nums.length; ++i) {
        if (nums[i] + 1 != nums[i + 1]) {
            // console.log(start, nums[i]);
            if (start != nums[i]) {
                ans.push(`${start}->${nums[i]}`);
            } else {
                ans.push(nums[i].toString());
            }
            start = nums[i + 1];
        }
    }
    console.log(ans);
    return ans;
};

summaryRanges([0, 1, 2, 4, 5, 7]);
