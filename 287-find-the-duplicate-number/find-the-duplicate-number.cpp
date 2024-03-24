class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n - 1; i++) { 
            if(nums[i] == nums[i + 1]) {
                ans = nums[i];
                break; 
            }
        }
        return ans;
    }
};

    //     unordered_map<int, int> Ourmap;
    //     for(int i = 0; i<n; i++){
    //         Ourmap[i] = 0;
    //     }
    //     for(int i = 0; i<n; i++){
    //         Ourmap[nums[i]] += 1;
    //         if(Ourmap[nums[i]] == 2){
    //             return nums[i];
    //         }
    //     }
    // return -1;