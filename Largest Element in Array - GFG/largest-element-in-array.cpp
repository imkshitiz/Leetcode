//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  void selectionSort(vector<int> &arr, int n){
        for(int i=0;i<n-1;i++){
            int miniIndex=i;
            for(int j=i+1;j<n;j++){
                if(arr[miniIndex]>arr[j]){
                    miniIndex=j;
                }
                
            
            }
            int temp=arr[i];
            arr[i]=arr[miniIndex];
            arr[miniIndex]=temp;
          
        }
         
    }
public:
    int largest(vector<int> &arr, int n)
    {
        selectionSort(arr,n);
        for(int i=0;i<n;i++){
          return arr[n-1];
        }
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends