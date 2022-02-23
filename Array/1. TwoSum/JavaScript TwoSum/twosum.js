var nums = [2, 7, 11, 15]
var target = 9
var solution = [];


var twoSum = function(nums, target) {
    for (var i = 0; i < nums.length; i++) {
        for (var j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] == target) {
                // solution.push(i); 
                // solution.push(j);
                return [i, j]
            }
        }
    }
};
// twoSum(nums, target);
// console.log(solution);