class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        // Sort the array first
        sort(nums.begin(), nums.end());
        
        int cnt = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                // Calculate the increment needed
                int increment = nums[i - 1] + 1 - nums[i];
                // Increment the current number to make it unique
                nums[i] += increment;
                // Add to the count the number of increments performed
                cnt += increment;
            }
        }
        
        return cnt;
    }
};
