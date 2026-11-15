class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<pair<int,int>> maxHeap;
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        >   minHeap;

        int j = 0, res = 0;
        for (int i = 0; i < (int)nums.size(); ++i) {
            int v = nums[i];
            maxHeap.emplace(v, i);
            minHeap.emplace(v, i);

            while (maxHeap.top().first - minHeap.top().first > limit) {
                ++j;
                while (!maxHeap.empty() && maxHeap.top().second < j)
                    maxHeap.pop();
                while (!minHeap.empty() && minHeap.top().second < j)
                    minHeap.pop();
            }

            res = max(res, i - j + 1);
        }
        return res;
    }
};