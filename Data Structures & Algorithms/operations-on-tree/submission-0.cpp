class LockingTree {
private:
    vector<int> parent;
    vector<vector<int>> child;
    vector<int> locked;

public:
    LockingTree(vector<int>& parent) : parent(parent), locked(parent.size()) {
        int n = parent.size();
        child.resize(n);
        for (int node = 1; node < n; node++) {
            child[parent[node]].push_back(node);
        }
    }

    bool lock(int num, int user) {
        if (locked[num]) {
            return false;
        }
        locked[num] = user;
        return true;
    }

    bool unlock(int num, int user) {
        if (locked[num] != user) {
            return false;
        }
        locked[num] = 0;
        return true;
    }

    bool upgrade(int num, int user) {
        int node = num;
        while (node != -1) {
            if (locked[node]) {
                return false;
            }
            node = parent[node];
        }

        int lockedCount = 0;
        queue<int> q;
        q.push(num);

        while (!q.empty()) {
            node = q.front(); q.pop();
            if (locked[node]) {
                locked[node] = 0;
                lockedCount++;
            }
            for (int nei : child[node]) {
                q.push(nei);
            }
        }

        if (lockedCount > 0) {
            locked[num] = user;
            return true;
        }
        return false;
    }
};