/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let max_water = -Infinity;
    let i = 0;
    let j = height.length - 1;
    while (i < j) {
        let water = Math.min(height[i], height[j]) * (j - i);
        max_water = Math.max(max_water, water);
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
        console.log(max_water);
    }
    return max_water;
};

let height = [1, 8, 6, 2, 5, 4, 8, 3, 7];
maxArea(height);
