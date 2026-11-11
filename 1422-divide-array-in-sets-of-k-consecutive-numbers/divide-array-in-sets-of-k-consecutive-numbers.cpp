class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0)return false;

        unordered_map<int,int> mp;
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto x:nums){
            if(mp[x]==0)pq.push(x);
            mp[x]++;
        }

        while(!pq.empty()){
            int first= pq.top();

            for(int i=0; i<k; i++){
                int ans= first+i;

                if(mp[ans]==0)return false;

                mp[ans]--;

                if(mp[ans]==0 && ans==pq.top())pq.pop();
            }
        }
        return true;
    }
};