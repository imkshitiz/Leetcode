class Solution {
public:
    int maxelem(vector<int> &nums){
int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maxi = max( maxi,nums[i]);
        }
        return maxi;
    }

int sumOfD(vector<int> &nums, int div){
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum+= ceil((double)(nums[i]) / (double)(div));
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        
	int low=1;
	int high=maxelem(nums);
while(low<=high){
	int mid = low+(high-low)/2;
	if(sumOfD(nums,mid)<=threshold){
		high=mid-1;
	}
	else{
		low=mid+1;
	}

}
return low;
    }
};