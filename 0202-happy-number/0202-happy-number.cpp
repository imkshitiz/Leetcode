class Solution {
public:
    int numquaresum(int n){
        int sum=0;
        while(n!=0){
            sum+= (n%10) * (n%10);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int>st;
        while(1){
            n=numquaresum(n);
            if(n==1) return true;
            if(st.find(n)!=st.end()) return false;
            st.insert(n);
        }
        
    }
};