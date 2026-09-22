class Solution {
public:
    void getperms(vector<int>& nums, int ind, vector<vector<int>>& ans ){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for (int i=ind; i<nums.size(); i++){
            swap(nums[ind],nums[i]);
            getperms(nums, ind+1, ans);

            //backtrack
            swap(nums[ind],nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getperms(nums,0,ans);
        return ans;
    }
};