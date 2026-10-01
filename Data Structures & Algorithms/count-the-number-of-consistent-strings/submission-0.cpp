class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> a;
        int count = 0;
        for(auto it: allowed){
            a[it]++;
        }

        for(int i=0; i<words.size(); i++){
            string s = words[i];
            count++;
            for(int j=0; j<s.length(); j++){
                if(a.find(s[j]) == a.end()){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};