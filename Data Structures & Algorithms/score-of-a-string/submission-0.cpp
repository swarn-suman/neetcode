class Solution {
public:
    int scoreOfString(string s) {
        int i=0;
        int j=i+1;
        int score = 0;

        while(i<s.length() && j<s.length()){
            int diff = s[j]-s[i];
            score = score + abs(diff);
            i++;
            j++;
        }
        return score;
    }
};