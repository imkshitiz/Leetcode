class Solution {
public:
    vector<vector<int>>ans;
    int recur(vector<int>&nums,vector<int>&temp,int i){
        if(i>=nums.size()){
            ans.push_back(temp);
            return 0;
        }
        vector<int>tt=temp;
        tt.push_back(nums[i]);
        return max(recur(nums,temp,i+1),recur(nums,tt,i+1));
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();vector<int>temp;
        recur(nums,temp,0);
        return ans;
    }
};