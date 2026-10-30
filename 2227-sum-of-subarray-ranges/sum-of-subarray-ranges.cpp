class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        stack<int> st;

        for (int i = 0; i <= n; i++) {
            while (!st.empty() &&
                   (i == n || nums[st.top()] < nums[i])) {
                long long idx = st.top();
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int right = i;

                sum += nums[idx] * (idx - left) * (right - idx);
            }
            if (i < n) st.push(i);
        }

        while (!st.empty()) st.pop();

        for (int i = 0; i <= n; i++) {
            while (!st.empty() &&
                   (i == n || nums[st.top()] > nums[i])) {
                long long idx = st.top();
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int right = i;

                sum -= nums[idx] * (idx - left) * (right - idx);
            }
            if (i < n) st.push(i);
        }

        return sum;
    }
};