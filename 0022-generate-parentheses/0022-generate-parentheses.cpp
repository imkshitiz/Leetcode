class Solution {
public:
    
    void solve(int open, int close, vector<string> &ans, string s)
    {
    
        if(open==0 && close==0)
        {
            ans.push_back(s);
            return;
        }
    
        if(open>0)
        {
            s.push_back('(');
            solve(open-1, close, ans, s);
            s.pop_back();
        }
    
        if(close>open)
        {
            s.push_back(')');
            solve(open, close-1, ans, s);
            s.pop_back();
        }
    }

    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n;
        int close =n;
        
        string s ="";
        solve(open,close,ans,s);
        
        return  ans;
    }
};