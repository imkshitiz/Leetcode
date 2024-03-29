class Solution {
public:
    string reverseWords(string s) {
        string temp;
        int i =0; 
        int n  = s.length();
        while(i<n)
        {
            while(i<n && s[i]==' ')
            {
                i++;
            }
            if(i>=n)
            {
                break; 
            }
            int j=i+1;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
            string ans= s.substr(i,j-i);
            if(temp.length()== 0) temp =ans;
            else 
            temp = ans + " " + temp; 
            i=j+1;
        }
        return temp;
    }
};