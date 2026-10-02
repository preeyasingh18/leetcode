class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int cnt=0, maxcnt=0, i=0, j=0;
        vector<int> start, end;
        for(auto it : intervals) {
            start.push_back(it[0]);
            end.push_back(it[1]);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        while(i<start.size()){
            if(start[i]<=end[j]){
                cnt+=1;
                maxcnt=max(cnt, maxcnt);
                i+=1;
            }
            else{
                cnt-=1;
                j+=1;
            }
            
        }
        return maxcnt;
    }
};