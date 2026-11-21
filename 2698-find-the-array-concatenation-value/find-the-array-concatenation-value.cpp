class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;

        int i=0 , j=n-1;

        while(i<=j){
            if(i==j){
                sum+=nums[i];
            }
            else{
                string s= to_string(nums[i]) + to_string(nums[j]);
                sum= stoi(s)+sum;
                
            }
            i++;
            j--;
        
        }
        return sum;
    }
};