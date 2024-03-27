class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if (k <= 1) return 0;

        int i = 0, j = 0, cnt = 0;
        int prod = 1;

        while(i<n && j<n){
            prod *= nums[j];

            while(prod >= k){
                prod /= nums[i];
                i++;
            }
            cnt += j-i+1;
            j++;
        }
        return cnt;
    }
};

    // TLE
        // while(i<n && j<n){
        //     if(prod < k && j+1 < n){
        //         cnt++;
        //         j++;
        //         prod *= nums[j];
        //     }
        //     else if(prod >= k && i+1 < n){
        //         i++;
        //         prod = nums[i];
        //         j = i;
        //     }
        // }