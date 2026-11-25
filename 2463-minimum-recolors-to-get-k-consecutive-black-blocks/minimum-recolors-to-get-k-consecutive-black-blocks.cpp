class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans= INT_MAX;
        int i=0;
        int j=0;
        int n=blocks.size();
        
        int W=0;
        while(j<n){
            if(blocks[j]=='W')W++;

            if(j-i+1==k){
                ans= min(ans, W);

                if(blocks[i]=='W')W--;
                i++;
            }
            j++;

        }
        return ans;
    }
};