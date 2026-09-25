class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }

        int i=1;
        while(i<nums.size()){
            if(nums[i]%2==0 && nums[i-1]%2==0){
                return false;
            }

            else if(nums[i]%2!=0 && nums[i-1]%2!=0){
                return false;
            }

            else{
                i++;
            }
        }
        return true;
    }
};