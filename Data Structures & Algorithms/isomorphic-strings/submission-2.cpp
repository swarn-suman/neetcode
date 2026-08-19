class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, char> ans;
        unordered_set<char> mapped_t_chars;

        for(int i=0; i<s.length(); i++){
            auto it = ans.find(s[i]);
            if(it == ans.end()){
                if(mapped_t_chars.count(t[i])){
                    return false;
                }

                ans[s[i]] = t[i];
                mapped_t_chars.insert(t[i]);
            }

            else if(it != ans.end() && ans[s[i]] != t[i]){
                return false;
            }
            
        }
        return true;
    }
};