/*
   https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/
#include <iostream>
using namespace std;

int main() {
   int nums[] = { 1,1,2,3 };
   int length;

   length = sizeof(nums) / sizeof(nums[0]);

   for (int i = 0; i < length; i++) {
      if (nums[i] == nums[i + 1]) {
         for (int j = i + 1; j < length; j++) {
            nums[j] = nums[j + 1];
         }
      }
   }

   for (int i = 0; i < length; i++) {
      cout << nums[i] << " ";
   }


   return 0;
}