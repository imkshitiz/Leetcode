class Solution {
public:
    bool isPowerOfFour(int n) {
     if(n<=0) return false;
        
        double temp = (log(n))/(log(4));
        
        return ceil(temp) == temp;
    }    
};