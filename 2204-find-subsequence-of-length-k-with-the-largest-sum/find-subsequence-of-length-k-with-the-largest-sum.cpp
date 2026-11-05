class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> result;
        priority_queue<pair<int,int>> pq;

        for(int i=0; i<nums.size(); i++){
            pq.push({nums[i],i});
        }

        vector<pair<int,int>> temp;

        for(int i=0; i<k; i++){
            temp.push_back(pq.top());
            pq.pop();
        }

        sort(temp.begin(), temp.end(),
             [](auto &a, auto &b) {
                 return a.second < b.second;
        });

        for (auto &p : temp) {
            result.push_back(p.first);
        }

        return result;
    }
};