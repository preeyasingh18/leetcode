class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v(begin(prices), end(prices));
        stack<int> st;

        for(int i=0; i<prices.size(); i++){
            
            while(!st.empty() && prices[i]<= prices[st.top()]){
                v[st.top()]-=prices[i];
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
};