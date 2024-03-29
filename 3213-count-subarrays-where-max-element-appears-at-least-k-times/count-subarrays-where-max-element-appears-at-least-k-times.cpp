class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0, r = 0,l = 0;
        long long maxNum = *max_element(nums.begin(), nums.end());

        for(r = 0; r < n; r++){
            if(nums[r] == maxNum) k--;
            while (!k) {
                if (nums[l] == maxNum) {
                    k++;
                }
                l++;
            }
            ans+=l;
        }
        return ans;
        

    }
};