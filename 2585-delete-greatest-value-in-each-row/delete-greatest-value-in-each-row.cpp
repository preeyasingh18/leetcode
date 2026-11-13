class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<priority_queue<int>> pq(m);

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                pq[i].push(grid[i][j]);
            }
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            int maxi = INT_MIN;
            for(int j = 0; j < m; j++) {
                maxi = max(maxi, pq[j].top());
                pq[j].pop();
            }

            ans += maxi;
        }

        return ans;

    }
};