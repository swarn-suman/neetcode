class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long t = 0, total = 0;

        for (auto& c : customers) {
            int arrival = c[0], order = c[1];
            t = max(t, (long long)arrival) + order;
            total += t - arrival;
        }

        return (double) total / customers.size();
    }
};