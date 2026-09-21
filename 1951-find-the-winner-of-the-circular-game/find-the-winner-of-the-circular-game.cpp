class Solution {
public:
    int findindex(int n, int k){
        if(n==1)return 0;
        return (findindex(n-1,k)+k) % n;
    }
    int findTheWinner(int n, int k) {
        int index= findindex(n, k);
        return index+1;
        
    }
};