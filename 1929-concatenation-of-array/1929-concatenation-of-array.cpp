class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int k =0;
        for(int i = 0; i< 2*n;i++){
            if(i==n)
                k=0;
            ans.push_back(nums[k]);
            k++;
        }
        return ans;
    }
};