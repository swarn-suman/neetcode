class Solution {
public:
    int minSwaps(string s) {
        vector<char> stack;

        for (char c : s) {
            if (c == '[') {
                stack.push_back(c);
            } else if (!stack.empty()) {
                stack.pop_back();
            }
        }
        return (stack.size() + 1)/2;
    }
};