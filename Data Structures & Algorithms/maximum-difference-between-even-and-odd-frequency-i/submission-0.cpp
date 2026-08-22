class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> ans;

        for(int i=0; i<s.length(); i++){
            if(ans.find(s[i]) == ans.end()){
                ans[s[i]] = 1;
            }

            else{
                ans[s[i]]++;
            }
        }

        int odd_max = 0;
        int even_min = 100;

        for(auto it:ans){
            if(it.second%2 == 0 && it.second<even_min){
                even_min = it.second;
            }

            if(it.second%2 != 0 && it.second>odd_max){
                odd_max = it.second;
            }
        }
        return odd_max-even_min;
    }
};