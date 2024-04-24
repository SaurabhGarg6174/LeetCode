class Solution {
public:

    int dp(int n, vector<int>& arr){
        if(arr[n] != -1) return arr[n];
        int ans;
        if(n == 0) ans = 0;
        else if(n == 1 || n == 2) ans = 1;
        else ans = dp(n-1, arr) + dp(n-2, arr) + dp(n-3, arr);

        arr[n] = ans;
        return ans;
    }
    int tribonacci(int n) {
        vector<int> arr(n+1, -1);
        return dp(n, arr);
    }
};