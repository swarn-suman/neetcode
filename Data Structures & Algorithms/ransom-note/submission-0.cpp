class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> r;
        for(auto ch1: ransomNote){
            r[ch1]++;
        }

        unordered_map<char,int> m;
        for(auto ch2: magazine){
            m[ch2]++;
        }

        for(auto p: r){
            if(p.second > m[p.first]){
                return false;
            }
        }
        return true;
    }
};