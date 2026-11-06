class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        priority_queue<int> even, odd;

        for(char c:s){
            int a = c - '0';

            if(a%2==0)even.push(a);
            else odd.push(a);
        }

        for(char &c : s) {
            if((c - '0') % 2 == 0) {
                c = even.top() + '0';
                even.pop();
            }
            else {
                c = odd.top() + '0';
                odd.pop();
            }
        }

        return stoi(s);
    }
};