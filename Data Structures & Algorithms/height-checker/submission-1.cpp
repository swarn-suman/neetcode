class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count[101] = {0};

        for (int height : heights) {
            count[height]++;
        }

        int mismatches = 0;
        int index = 0;

        for (int height = 1; height <= 100; height++) {

            while (count[height] > 0) {

                if (heights[index] != height) {
                    mismatches++;
                }

                index++;
                count[height]--;
            }
        }

        return mismatches;
    }
};