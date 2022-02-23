/* https://leetcode.com/problems/two-sum/
Given an array of integers [nums] and an integer [target], return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/


#include <iostream>
using namespace std;

int main() {
   int nums[] = { 2, 5, 7, 15 };
   int target = 9;
   int sol[2];

   int length = sizeof(nums) / sizeof(nums[0]);
   // cout << length << endl;

   for (int i = 0; i < length; i++) {
      for (int j = i + 1; j < length; j++)
         if (nums[i] + nums[j] == target) {
            sol[0] = i;
            sol[1] = j;
         }
   }
   cout << sol[0] << " " << sol[1] << endl;

   return 0;
}