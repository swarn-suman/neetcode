class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maximum = *max_element(nums.begin(), nums.end());
        int best = 0, run = 0;
        for (int x : nums) {
            run = x == maximum ? run + 1 : 0;
            best = max(best, run);
        }
        return best;
    }
};
