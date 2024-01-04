/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
    let prefix = [];
    let suffix = [];
    let product = 1;
    for (let i = 0; i < nums.length; ++i) {
        prefix.push(product);
        product *= nums[i];
    }
    product = 1;
    for (let j = nums.length - 1; j >= 0; --j) {
        suffix.push(product);
        product *= nums[j];
    }
    suffix.reverse();

    return nums.map((x, idx) => prefix[idx] * suffix[idx]);
};

let nums = [1, 2, 3, 4];
productExceptSelf(nums);
