class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum=0;
        if(k == 0)return sum;
        else if(k <= numOnes){
            sum=k;
        }
        else{
            if(k <= (numOnes + numZeros))return sum=numOnes;
            else{
                sum= numOnes - (k - numOnes - numZeros);
            }
        }
        return sum;
        
    }
};