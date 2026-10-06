class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = 0, sum=0, index=0;
        while(k > 0 ){
            for(int i=0; i< nums.size(); i++){
                if(nums[i]>maxi){
                    maxi=nums[i];
                    index=i;

                } 
            }
            sum+=maxi;
            nums[index]=nums[index]+1;
            k--;     
        }
        return sum;
    }
};