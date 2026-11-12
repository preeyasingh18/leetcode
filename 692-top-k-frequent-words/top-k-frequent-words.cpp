class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        for(auto i:words){
            mp[i]++;
        }

        vector<string> arr;

        for (auto it : mp) {
            arr.push_back(it.first);
        }

        sort(arr.begin(), arr.end(), [&](string a, string b) {
            if (mp[a] == mp[b]) {
                return a < b;
            }
            return mp[a] > mp[b];
        });

        vector<string> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};