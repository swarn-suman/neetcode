class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map <char,int> mp;
        for (char ch : text) { 
            mp[ch]++; 
        }

        unordered_map<char, int> balloon = {{'b', 1}, {'a', 1},{'l', 2}, {'o', 2}, {'n', 1}};

        int ans = text.length();
        for (auto& c : balloon) {
            ans = min(ans, mp[c.first] / c.second);
        }
        return ans;
    }
};