class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(), nums.end());
        if(nums.size()%2==0){
            for(int i=0; i<nums.size(); i+=2){
                sum+=nums[i];
            }
        }
        return sum;
    }
};