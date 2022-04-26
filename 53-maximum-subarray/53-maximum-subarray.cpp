class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int currsum = 0;
        int res = INT_MIN;
        for(int i=0;i<nums.size();i++){
            currsum = currsum + nums[i];
            if(currsum>res){
                res=currsum;
            }
            if(currsum<0){
                currsum = 0;
            }
        }
        return res;
    }
};