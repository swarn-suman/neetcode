class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> ans;

        for (string e : emails) {
            string local = e.substr(0, e.find('@'));
            local = local.substr(0, local.find('+'));
            local.erase(remove(local.begin(), local.end(), '.'), local.end());
            ans.insert(local + e.substr(e.find('@')));
        }
        return ans.size();
    }
};