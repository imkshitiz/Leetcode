class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false; 
        
        unordered_map<char, char> mps; 
        unordered_map<char, char> mpt; 
        for(int i = 0; i < s.length(); i++) {
           
             
            if(mps[s[i]] && mps[s[i]] != t[i]) return false;
            if(mpt[t[i]] && mpt[t[i]] != s[i]) return false;
          
            mps[s[i]] = t[i];
            mpt[t[i]] = s[i];
        }
        return true;
    }
        
        
    
};