// 2 solutions

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1){
            return nums[0];
        }

        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i=2; i<n; i ++){
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        }
        
        return dp[n-1];
    }
};


// memory optimization

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1){
            return nums[0];
        }

        int pre1 = nums[0];
        int pre2 = max(nums[0], nums[1]);
        int res = pre2;

        for(int i=2; i<n; i ++){
            res = max(pre1 + nums[i], pre2);
            pre1 = pre2;
            pre2 = res;
        }
        
        return res;
    }
};
