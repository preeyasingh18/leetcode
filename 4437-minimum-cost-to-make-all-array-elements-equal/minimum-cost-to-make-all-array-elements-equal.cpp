class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        long long ans = LLONG_MAX;

        int i = 1;

        while (i<n - 1) {
            int j=i;

            while (j+1<n && nums[j]==nums[j + 1]) {
                j++;
            }

            int l=i;

            while (l>0 && nums[l - 1]==nums[i]) {
                l--;
            }

            long long cost = 1LL*(l + n - j - 1)*nums[i];

            ans = min(ans, cost);

            i=j+1;
        }

        return ans;
    }
};