//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long maxSum=INT_MIN;
        long currSum=0;
        int left=0,right=0;
        while(right<n){
            currSum+=arr[right];
            if(currSum>maxSum){
                maxSum=currSum;
            }
            if(currSum<0){
                currSum=0;
                right++;
                left=right;
                
                // if(left>right){
                //     right=left;
                // }
            }
            else{
                right++;
            }
        }
        return maxSum;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends