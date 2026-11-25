class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int ans=0;

        for (int i=0; i<n; i++) {
            string temp = s.substr(i) + s.substr(0, i);

            int cnt = 0;

            for (int j=0; j<n-1; j++) {
                if (temp[j] == temp[j + 1]) {
                    cnt++;
                }
            }

            if (cnt==k) {
                ans++;
            }
        }

        return ans;
    }
};