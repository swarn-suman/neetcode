class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        queue<int> q;

        for (int i = 0; i < n; i++) {
            q.push(i);
        }

        int time = 0;
        while (!q.empty()) {
            time++;
            int cur = q.front();
            q.pop();
            tickets[cur]--;
            if (tickets[cur] == 0) {
                if (cur == k) {
                    return time;
                }
            } else {
                q.push(cur);
            }
        }
        return time;
    }
};