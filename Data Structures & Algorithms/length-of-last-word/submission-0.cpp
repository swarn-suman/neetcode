class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        while (i >= 0) {
            if (count == 0 && s[i] == ' ') {
                i--;
            }
            else if (count == 0 && s[i] != ' ') {
                count++;
                i--;
            }
            else if (count != 0 && s[i] != ' ') {
                count++;
                i--;
            }
            else {
                break;
            }
        }

        return count;
    }
};