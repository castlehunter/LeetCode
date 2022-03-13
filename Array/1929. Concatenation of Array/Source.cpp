/* 1929. Concatenation of Array
Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and
ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays. Return the array ans.
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
*/

/*
* 'Better to use vector
*/

#include <iostream>
using namespace std;

int main() {
   //             0 1 2 3 4 5
   int nums[] = { 1,2,1 };
   int size, length;
   int* ans = nullptr;
   int i, j=0;

   // Get the length of the array
   size = sizeof(nums);
   cout << "nums memory " << size << endl; // 12
   length = sizeof(nums) / sizeof(nums[0]);
   cout << "Array length: " << length << endl;  // 3

   ans = new int[length * 2];

   for (i = 0; i < length; i++) {
      ans[i] = nums[i];
      cout << ans[i];
   }

   
   for (i = length; i < length * 2 && j < 3; i++) {
      for (j = 0; j < length; j++) {
         ans[i] = nums[j];
         cout << ans[i];
      }
   }

   delete[] ans;

   return 0;
}