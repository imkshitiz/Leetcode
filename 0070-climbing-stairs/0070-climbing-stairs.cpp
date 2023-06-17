class Solution {
    public:
    int climb(int n){
        int prev1=1;
        int prev2=0;
        for(int i=1;i<=n;i++){
            int curr1= prev2+prev1;
           prev2=prev1;
            prev1=curr1;
}
        return prev1;
}
public:
    int climbStairs(int n) {
        
        return climb(n);
        
    }
};