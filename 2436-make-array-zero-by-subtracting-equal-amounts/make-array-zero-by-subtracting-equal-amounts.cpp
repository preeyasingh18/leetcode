class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0;

        priority_queue<int> pq;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0)pq.push(nums[i]);
        }

        while(!pq.empty()) {
            int top = pq.top();
            pq.pop();

            while(!pq.empty() && pq.top() == top) {
                pq.pop();
            }

            op++;
        }
        return op;
            
        
    }
};