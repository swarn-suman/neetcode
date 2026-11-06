class Solution {
public:
    string shortestPalindrome(string s) {
        string reversed(s.rbegin(),s.rend());
        string combined = s + "#" + reversed;

        vector<int> prefix(combined.size());
        
        for (int i = 1; i < combined.size(); i++) {
            int j = prefix[i-1];
            while (j > 0 && combined[i] != combined[j]) j = prefix[j-1];
            if (combined[i] == combined[j]) j++;
            prefix[i] = j;
        }
        return reversed.substr(0,s.size()-prefix.back()) + s;
    }
};
