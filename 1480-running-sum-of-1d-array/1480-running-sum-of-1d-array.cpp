class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int res = 0;
        
        for(int i =0;i<nums.size();i++){
            ans.push_back(res+nums[i]);
            res += nums[i];
            

        }
        return ans;
    }
};