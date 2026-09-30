class Solution {
public:
    static bool compare(int a, int b){
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }
    string largestNumber(vector<int>& nums){
        string ans="";
        sort(nums.begin(), nums. end(), compare);

        for (auto it: nums){
            ans += to_string(it);
        }

        if(ans[0]=='0')return "0";
        return ans;
    }
};