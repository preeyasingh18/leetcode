class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        string sans="", tans="";
        for(auto it:s){
            if(!st.empty() && it=='#')st.pop();
            else if(it != '#'){
                st.push(it);
            }
        }
        while(!st.empty()){
            sans+=st.top();
            st.pop();
        }

        for(auto it:t){
            if(!st.empty() && it=='#')st.pop();
            else if(it != '#'){
                st.push(it);
            }
        }
        while(!st.empty()){
            tans+=st.top();
            st.pop();
        }
        
        if(sans == tans)return true;
        
        return false;
    }
};