class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int i = 0;
        string ans = "";

        while (i < word.size() && word[i] != ch) {
            st.push(word[i]);
            i++;
        }
        if (i == word.size()) {
            return word;
        }
        st.push(word[i]);
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        ans += word.substr(i + 1);
        return ans;
    }
};