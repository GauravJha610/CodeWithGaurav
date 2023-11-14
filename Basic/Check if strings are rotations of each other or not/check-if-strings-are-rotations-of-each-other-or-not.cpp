//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size()){
            return false;
        }
        string p=s1+s1;
        return p.find(s2)!=-1;
        // int dp[n2+1];
        // dp[0]=0;
        // dp[1]=0;
        // for(int i=1,j=0;i<n2+1;i++){
        //     if(s1[i]==s1[j]){
        //         dp[i+1]=j+1;
        //         j++;
        //     }
        //     else{
        //         j=0;
        //         dp[i+1]=j;
        //     }
        // }
        // for(int i=0,j=0;i<p.size();i++){
        //     if(p[i]==s2[j]){
        //         j++;
        //         if(j==n2){
        //             return true;
        //         }
        //     }
        //     else if(p[i]!=s2[j] && j!=0){
        //         j=dp[j+1];
        //         i--;
        //     }
        // }
        // // for(int i=0;i<n2+1;i++){
        // //     cout<<dp[i]<<" ";
        // // }
        // // cout<<endl;
        // return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends