/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function (flowerbed, n) {
    // loop cant be from 1 to len-1 cuz lets say flowerbed = [0, 0, 0]
    // then in that case ans would be [0, 1, 0], but ans should be [1, 0, 1]
    if (n === 0) {
        return true;
    }
    if (flowerbed.length === 1) {
        return flowerbed[0] == [0];
    }
    let count = 0;
    for (let i = 0; i < flowerbed.length; ++i) {
        if (flowerbed[i] == 0) {
            isEmptyLeft = true;
            isEmptyRight = true;
            if (i === 0) {
                isEmptyRight = flowerbed[i + 1] === 0;
            } else if (i === flowerbed.length - 1) {
                isEmptyLeft = flowerbed[i - 1] === 0;
            } else {
                isEmptyLeft = flowerbed[i - 1] === 0;
                isEmptyRight = flowerbed[i + 1] === 0;
            }

            if (isEmptyLeft && isEmptyRight) {
                count++;
                i++; // since we cannot place 1 at the next position
            }
        }
        if (count === n) {
            return true;
        }
    }
    return false;
};

var flowerbed = [0];
var n = 1;
console.log(canPlaceFlowers(flowerbed, n));
