class Solution {
public:
    int no_of_students(vector<int> &arr, int pages){
    int n=arr.size();
    int student = 1;
    long long Nopages=0;
    for(int i=0;i<n;i++){
        if(Nopages + arr[i] <= pages){
            Nopages+=arr[i];
        }
        else{
            student++;
            Nopages=arr[i];
        }
    }
    return student;
    
}
int findPages(vector<int>& arr, int n, int m) {

    if(m>n) return -1;

    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    while(low<=high){
        int mid=low+(high-low)/2;
        int students = no_of_students(arr,mid);
        if(students > m){
            low=mid+1;
        }
        else high= mid-1;
        
    }
    return low;


}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,nums.size(),k);
    }
};