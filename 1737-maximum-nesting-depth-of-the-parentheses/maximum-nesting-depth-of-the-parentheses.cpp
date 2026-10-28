class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;
        stack<char> st;

        for(char ch:s){
            if(ch=='('){
                count++;
                maxi=max(count,maxi);
                st.push(ch);
            }
            else if(ch==')'){
                if(!st.empty()){
                    count--;
                    st.pop();
                }
                
            }
        }
        return maxi;
    }
};