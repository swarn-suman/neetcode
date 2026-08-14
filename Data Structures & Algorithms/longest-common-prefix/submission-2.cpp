class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans;

        string first = strs[0];
        string last = strs[strs.size()-1];

        int i=0;
        while(i<first.length() && i<last.length()){
            if(first[i] == last[i]){
                i++;
            }
            else{
                break;
            }
        }
        return first.substr(0,i);
    }
};