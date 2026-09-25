class Solution {
public:
    void helper(vector<string>& v, int oc, int cc, int n, string s){
        //base case
        if(oc==n && cc==n){
            v.push_back(s);
            return;
        }
        if (oc < n){
            helper(v, oc+1, cc, n, s+"(");
        }
        if (cc < oc ){
            helper(v, oc, cc+1, n, s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int oc=0, cc=0;
        helper(v, oc, cc, n, "");
        return v;
    }
};