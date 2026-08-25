class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int total = nums[0], max_total = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                total = total+nums[i];
            }

            else{
                total = nums[i];
            }
            max_total = max(total,max_total);
            
        }
        return max_total;
    }
};