class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans;
        priority_queue<int> pq;

        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }

        for(int i=0; i<1; i++){
            int a= pq.top();
            pq.pop();

            int b= pq.top();
            pq.pop();

            ans= (a-1)*(b-1);

        }

        return ans;
    }
};