class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        vector<long long> ans;
        for(auto &x:nums){
            ans.push_back(x);
        }
        for(int i=ans.size()-1;i>0;i--){
                if(ans[i-1]<=ans[i]){
                        ans[i-1]=ans[i-1]+ans[i];
                }
        }
        return ans[0];
            
        
    }
};