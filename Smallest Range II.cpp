910. Smallest Range II
Solved
Medium
Topics
Companies
You are given an integer array nums and an integer k.

For each index i where 0 <= i < nums.length, change nums[i] to be either nums[i] + k or nums[i] - k.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after changing the values at each index.

 

Example 1:

Input: nums = [1], k = 0
Output: 0
Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
Example 2:

Input: nums = [0,10], k = 2
Output: 6
Explanation: Change nums to be [2, 8]. The score is max(nums) - min(nums) = 8 - 2 = 6.
Example 3:

Input: nums = [1,3,6], k = 3
Output: 3
Explanation: Change nums to be [4, 6, 3]. The score is max(nums) - min(nums) = 6 - 3 = 3.















class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
      int n = nums.size();
        if (n == 1) return 0; 

        std::sort(nums.begin(), nums.end());
        
        int diff = nums[n - 1] - nums[0]; 
        int result = diff; 
        
        
        int min1 = nums[0] + k;
        int max1 = nums[n - 1] - k;

        for (int i = 1; i < n; i++) {
            int min2 = nums[i] - k;
            int max2 = nums[i - 1] + k;

           
            int newMin = std::min(min1, min2);
            int newMax = std::max(max1, max2);

            
            result = std::min(result, newMax - newMin);
        }
        
        return result;
    }
};
