class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        int count=0;

        for(int i=0; i<tickets.size(); i++){
            q.push({tickets[i],i});
        }

        while(!q.empty()){
            auto each= q.front();
            q.pop();

            each.first--; //buys 1 ticket
            count++; //+1 sec to count

            if(each.second==k && each.first==0){
                return count;
            }

            if( each.first>0){
                q.push(each);
            }

        }
        return count;
    }
};