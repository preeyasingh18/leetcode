class Solution {
public:
    vector<string> ans;
    
    void backtrack(int index, string digits, string current, vector<string>& mp) {
        if(index == digits.size()) {
            ans.push_back(current);
            return;
        }

        string letters = mp[digits[index] - '0'];

        for(char ch : letters) {
            current.push_back(ch);
            backtrack(index + 1, digits, current, mp);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        vector<string> mp = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        backtrack(0, digits, "", mp);
        return ans;
        
    }
};