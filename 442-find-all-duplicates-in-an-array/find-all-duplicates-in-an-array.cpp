class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp = abs(nums[i]);
            if(nums[temp-1] < 0){
                ans.push_back(temp);
            }
            nums[temp-1] *= -1;
        }
        return ans;         
    }
};
    // this is O(nlog(n)) time complexity:
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         ans.push_back(nums[i]);
        //     }    
        // }
        // return ans;