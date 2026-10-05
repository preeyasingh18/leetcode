class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minsum= INT_MAX;
        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                int sum=prices[i]+prices[j]; 
                if(sum <= money) {
                    minsum = min(minsum, sum);
                }
            } 
        }

        if(minsum == INT_MAX)
            return money;

        return money - minsum;
    }
};