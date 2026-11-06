class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);

        priority_queue<pair<int, int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

        for(int i=0; i<n; i++){
            pq.push({arr[i],i});
        }

        int rank = 0;
        int prev = INT_MIN;

        while(!pq.empty()){

            int val = pq.top().first;
            int idx = pq.top().second;
            pq.pop();

            if(val != prev){
                rank++;
                prev = val;
            }

            result[idx] = rank;
        }

        return result;
    }
};