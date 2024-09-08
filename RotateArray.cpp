
iven an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 





class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        stack<int> st1;
        stack<int> st2;
        int n = nums.size();
        k %= n; 
        
        
        for (int i = n - 1; i >= n - k; i--) {
            st1.push(nums[i]);
        }
        
        
        for (int j = n - k - 1; j >= 0; j--) {
            st2.push(nums[j]);
        }
        
        
        int index = 0;
        while (!st1.empty()) {
            nums[index++] = st1.top();
            st1.pop();
        }
        while (!st2.empty()) {
            nums[index++] = st2.top();
            st2.pop();
        }
    }
};

//IINd apprch

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // Handle cases where k is greater than n
        reverse(nums.begin(), nums.end()); // Reverse the entire array
        reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
        reverse(nums.begin() + k, nums.end()); // Reverse the rest
    }
};