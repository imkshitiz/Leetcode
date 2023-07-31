class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int n = height.size();
       int start=0;
       int end=n-1;
        int maxi=0;
    
        while(start<end){
            
            
            int min_h = min(height[start],height[end]);
            
            maxi= max(maxi, min_h*(end-start));
            
            if(height[start]<height[end]) start++;
            else end--;
            
        }
        return maxi;
    
        
    }
};