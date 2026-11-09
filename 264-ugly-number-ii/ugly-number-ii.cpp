class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        unordered_set<long long> st;

        pq.push(1);
        st.insert(1);

        long long ans = 1;

        for(int i = 0; i < n; i++) {
            ans = pq.top();
            pq.pop();

            if(st.find(ans * 2) == st.end()) {
                pq.push(ans * 2);
                st.insert(ans * 2);
            }

            if(st.find(ans * 3) == st.end()) {
                pq.push(ans * 3);
                st.insert(ans * 3);
            }

            if(st.find(ans * 5) == st.end()) {
                pq.push(ans * 5);
                st.insert(ans * 5);
            }
        }

        return ans;
    }
};