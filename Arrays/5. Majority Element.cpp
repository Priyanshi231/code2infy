class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = nums[0];
        int c = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(c == 0){
                curr = nums[i];
            }

            if(curr == nums[i]){
                c++;
            }else{
                c--;
            }
        }
        return curr;
    }
};
