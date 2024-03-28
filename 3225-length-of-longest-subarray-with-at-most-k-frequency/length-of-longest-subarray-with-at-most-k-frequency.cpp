class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size(), r = 0, l = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        for (r = 0; r < n; r++) {
            mp[nums[r]]++;
            // if( nums[l]!=nums[r]){
                while (mp[nums[r]] > k) {
                    mp[nums[l]]--;
                    l++;
                }
                ans = max(ans, r-l+1);
            // }
        }
        return ans;
    }    
};
