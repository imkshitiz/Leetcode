class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(auto it : mp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
        
    }
    
};