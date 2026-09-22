class Solution {
public:
    void getperms(vector<int>& nums, int ind, vector<vector<int>>& ans ){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        map<int, bool> used;

        for(int i = ind; i < nums.size(); i++) {
            if(used[nums[i]]) continue;

            used[nums[i]] = true;
            swap(nums[ind], nums[i]);

            getperms(nums, ind + 1, ans);

            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        getperms(nums,0,ans);
        return ans;
    }
};