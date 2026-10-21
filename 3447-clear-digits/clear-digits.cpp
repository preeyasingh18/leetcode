class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string ans= "";
        for(char ch:s ){
                if( !isdigit(ch)){
                    st.push(ch);
                }
                else{
                    st.pop();
                }

            }
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};