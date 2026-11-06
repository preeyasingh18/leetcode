class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        int ans=0;

        for(int i=0; i<amount.size(); i++){
            if(amount[i]>0) pq.push(amount[i]);
        }

        while(pq.size()>=2){
            int p=pq.top();
            pq.pop();

            int q=pq.top();
            pq.pop();

            p--;
            q--;

            if(p>0)pq.push(p);
            if(q>0)pq.push(q);
            ans++;
        }

        if(!pq.empty())ans+=pq.top();
        return ans;
    }
};