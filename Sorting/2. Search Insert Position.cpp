class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int s = 0;
        int e = n-1;
        int ans = n;

        while(s <= e){
            int m = s+(e-s)/2;

            if(nums[m] < target){
                s = m+1;
            }

            else {
                ans = m;
                e = m-1;
            }
        }
        return ans;
    }
};
