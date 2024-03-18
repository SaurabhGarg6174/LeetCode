class Solution {
    static bool comp(const vector<int>& a, const vector<int>& b){
        return a[1] < b[1];
    }
public:


    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        int n = points.size();
        sort(points.begin(), points.end(), comp);

        int end = points[0][1]; 

        for(int i = 1; i<n; i++){
            if(end < points[i][0]){
                ans++;
                end = points[i][1];
            }
        }
        return ans;
    }
};