class Solution {
public:
    string makeGood(string s) {
        string ans="";
        stack<char> st;
        for(char ch:s){
            if(!st.empty() && (st.top()==ch+32 || st.top()==ch-32)){
                st.pop();

            }
            else{
                st.push(ch);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};