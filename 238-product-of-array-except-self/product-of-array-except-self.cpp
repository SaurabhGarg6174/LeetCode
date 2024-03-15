class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        if(nums.empty()) return result;
        
        int leftProduct = 1;
        for(int i = 0; i<n; i++){
            result[i] *= leftProduct;
            leftProduct *= nums[i];
        }
        int rightProduct = 1;
        for(int i = n-1; i>=0; i--){
            result[i] *= rightProduct;
            rightProduct *= nums[i]; 
        }
        return result;
    }
};
        /*TLE*/
        // for(int i = 0; i < n; i++){
        //     int temp = 1;
        //     for(int j = 0; j < n; j++){
        //         if(j != i){
        //             temp *= nums[j]; 
        //         }
        //     }
        //     result[i] = temp;
        // }