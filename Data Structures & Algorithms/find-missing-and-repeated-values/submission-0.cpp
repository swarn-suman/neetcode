class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        int n = grid.size();

        for (auto row : grid){
            for (auto num : row){
                mp[num]++;
            }
        }

        int doubleVal = 0, missing = 0;

        for (int num = 1; num <= n*n; num++) {
            int freq = mp[num];
            if (freq == 0) missing = num;
            if (freq == 2) doubleVal = num;
        }
        return {doubleVal, missing};

    }
};