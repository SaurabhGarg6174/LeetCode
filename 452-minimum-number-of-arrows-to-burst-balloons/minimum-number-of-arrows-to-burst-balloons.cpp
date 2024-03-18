class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        int n = points.size();
        sort(points.begin(), points.end(), [](const auto& a, const auto& b){
            return a[1] < b[1];
        });

        int end = points[0][1]; 

        for(int i = 1; i<n; i++){
            if(end < points[i][0]){
                ans++;
                end = points[i][1];
            }
        }

        // while(j<n){
        //     if(!(ele >= points[j][0]) || !(ele <= points[j][1])){
        //         cnt++;
        //         ele = points[j][1];
        //     }
        //     else{
        //         j++;
        //     }
        // } 
        return ans;
    }
};