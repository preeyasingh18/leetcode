class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans=0;
        for(auto it:operations){
            if( it=="C" ){
                s.pop();
            }
            else if( it=="D" ){
                int a=s.top();
                s.push(a*2);
            }
            else if( it=="+" ){
                int x = s.top();
                s.pop();

                int b = s.top();
                s.push(x);
                s.push(x + b);
            }
            else{
                s.push(stoi(it));
            }
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};