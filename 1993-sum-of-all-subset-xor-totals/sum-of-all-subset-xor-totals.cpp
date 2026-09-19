class Solution {
public:
    int findxor(vector<int>& nums, int index, int xorsum){
        if(index==nums.size())return xorsum;
        int pick= findxor(nums, index+1, xorsum^nums[index]);
        int notpick= findxor(nums, index+1, xorsum);
        return pick + notpick;

    }
    int subsetXORSum(vector<int>& nums) {
        return findxor(nums,0,0);
    }
};