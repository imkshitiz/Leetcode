//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int space=2*(n-1);
        for(int i=1;i<=n;i++){
            //for numbers
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            // for space
            for(int j=1;j<=space;j++){
                cout<<"  ";
            }
            // for numbers
            for(int j=i;j>=1;j--){
                cout<<j<<" ";
            }
            cout<<endl;
            space-=2;
            
        }
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends