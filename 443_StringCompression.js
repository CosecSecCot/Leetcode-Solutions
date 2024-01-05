/**
 * @param {character[]} chars
 * @return {number}
 */
var compress = function (chars) {
    for (let i = 0; i < chars.length - 1; ++i) {
        console.log(chars[i], i);
        if (chars[i] == chars[i + 1]) {
            let count = 0;
            let ext_arr = [];
            while (chars[i] == chars[i + 1]) {
                ext_arr.push(...chars.splice(i, 1));
                count++;
            }
            console.log('ext_arr before: ', ext_arr);
            ext_arr.push(
                ...(ext_arr.splice(1).length + 2).toString().split('')
            );
            if (i == chars.length - 1) {
                count++;
            }
            console.log('ext_arr after: ', ext_arr);
            // ans += count.toString().length + 1; // {char}{count} thats why + 1 for char
            chars.splice(i, 1, ...ext_arr);
            i = i + ext_arr.length - 1;
            console.log(chars, i);
        }
        console.log();
    }
    return chars.length;
};

let arr = [
    'a',
    'b',
    'b',
    'b',
    'b',
    'b',
    'b',
    'b',
    'b',
    'b',
    'b',
    'b',
    'b',
    'c',
    'c',
    'c',
    'c',
    'd',
];
console.log(compress(arr));
console.log(arr);
