class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> result;

        for(int i=0; i<n; i++){
            ans[nums[i]-1] = 1;
        }

        for(int j=0; j<ans.size(); j++){
            if(ans[j] == 0){
                result.push_back(j+1);
            }
        }
        return result;
    }
};