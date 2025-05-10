/**
 * @param {number} n
 * @return {number}
 */

var trailingZeroes = function(n) {
    if(n<0) return -1;

    let count=0


    for(let i=5;n/i>=1;i*=5){
        count+=Math.floor(n/i);
    }

    return count;
    
};