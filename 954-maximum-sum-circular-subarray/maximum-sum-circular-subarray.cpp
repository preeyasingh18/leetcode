class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(2 * n + 1, 0);

        for (int i = 0; i < 2 * n; i++) {
            pref[i + 1] = pref[i] + nums[i % n];
        }

        deque<int> dq;
        int maxi = INT_MIN;

        for (int end = 1; end < 2 * n; end++) {
            int start = end - 1;

            if (start < n) {
                while (!dq.empty() && pref[dq.back()] >= pref[start])
                    dq.pop_back();

                dq.push_back(start);
            }

            while (!dq.empty() && dq.front() < end - n)
                dq.pop_front();

            if (!dq.empty())
                maxi = max(maxi, pref[end] - pref[dq.front()]);
        }

        return maxi;
    }
};