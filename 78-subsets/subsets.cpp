class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsets(temp, 0, nums, ans);
        return ans;
    }

private:
    void subsets(vector<int>& temp, int i, vector<int>& nums, vector<vector<int>>& ans){
        ans.push_back(temp);
        for(int j = i; j < nums.size(); j++){
            temp.push_back(nums[j]);
            subsets(temp, j+1, nums, ans);
            temp.pop_back();
        }
    }    
};