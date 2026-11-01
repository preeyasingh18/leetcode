class Solution {
public:
    string decodeString(string s) {
        string result="";
        int num=0;
        stack<int> nst;
        stack<string> sst;

        for (char ch:s) {
            if (isdigit(ch)) {
                num = num*10 + (ch-'0');
            }

            else if (ch=='[') {
                nst.push(num);
                sst.push(result);
                num=0;
                result="";
            }

            else if (ch==']') {
                int k = nst.top();
                nst.pop();

                string temp = result;
                result="";
                
                while (k--) {
                    result += temp;
                }

                result = sst.top() + result;
                sst.pop();                
            }

            else{
                result += ch;
            }
        }
        return result;
    }
};