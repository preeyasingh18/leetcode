class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize !=0)return false;

        unordered_map<int,int> mp;
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto x: hand) {
            if(mp[x] == 0)
                pq.push(x);

            mp[x]++;
        }

        while(!pq.empty()) {

            int first = pq.top();

            for(int i = 0; i < groupSize; i++) {

                int card = first + i;

                if(mp[card] == 0)
                    return false;

                mp[card]--;

                if(mp[card] == 0 && card == pq.top())
                    pq.pop();
            }
        }

        return true;
    }
};