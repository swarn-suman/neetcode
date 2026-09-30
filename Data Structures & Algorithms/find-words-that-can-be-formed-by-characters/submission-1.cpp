class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> c;
        for(auto ch: chars){
            c[ch]++;
        }

        int ans = 0;
        for(int i=0; i<words.size(); i++){
            unordered_map<char,int> w;
            string s = words[i];
            for(int j=0; j<s.length(); j++){
                w[s[j]]++;
            }

            bool good = true;
            for(auto& p : w){
                if (p.second > c[p.first]) {
                    good = false;
                    break;
                }
            }
            if(good){
                ans = ans+s.length();
            }
        }
        return ans;
    }
};