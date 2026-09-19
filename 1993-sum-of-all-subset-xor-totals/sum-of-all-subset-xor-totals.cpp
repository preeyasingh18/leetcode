class Solution {
public:
    int findxor(vector<int>& nums, int index, int xorsum){
        if(index==nums.size())return xorsum;
        int pick= findxor(nums, index+1, xorsum^nums[index]);
        int nonpick= findxor(nums, index+1, xorsum);
        return pick + nonpick;

    }
    int subsetXORSum(vector<int>& nums) {
        return findxor(nums,0,0);
    }
};