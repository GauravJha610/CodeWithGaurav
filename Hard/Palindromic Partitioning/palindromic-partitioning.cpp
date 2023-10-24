//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int palindromicPartition(string s)
    {
        // code here
        int n=s.length();
        vector<vector<bool>>isPalindrome(n+1,vector<bool>(n+1,0));
        for(int i=0;i<n;i++)
        {
            isPalindrome[i][i]=1;
        }
        for(int gap=1;gap<n;gap++)
        {
            for(int i=0;i<n-gap;i++)
            {
                int j=i+gap;
                if(gap==1)
                {
                    if(s[i]==s[j])
                    isPalindrome[i][j]=1;
                }
                else
                {
                    if((isPalindrome[i+1][j-1]==1) && s[i]==s[j])
                    isPalindrome[i][j]=1;
                }
            }
        }
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int j=0;j<n;j++)
        {
            if(isPalindrome[j][n-1]==0)
            dp[n-1][j]=0x3f3f3f3f;
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                dp[i][j]=dp[i+1][j];
                if(isPalindrome[j][i] && i>=j)
                {
                    dp[i][j]=min(dp[i][j],1+dp[i+1][i+1]);
                }
            }
        }
        return dp[0][0];
    }
    // int palindromicPartition(string str)
    // {
    //     int n=str.length();
    //     int dp[n][n];
    //     for(int gap=1;gap<n;gap++){
    //         for(int row=0,col=gap;row<n-gap;row++,col++){
    //             if(isPalindrome(str,row,col)){
    //                 dp[row][col]=0;
    //             }
    //             else{
    //                 dp[row][col]=INT_MAX;
    //                 for(int k=row;k<col;k++){
    //                     dp[row][col]=min(dp[row][col],
    //                     1+dp[row][k]+dp[k+1][col]);
                        
    //                 }
    //             }
    //         }
    //     }
    //     return dp[0][n-1];
    // }
    // bool isPalindrome(string str,int row,int col){
    //     while(row<col){
    //         if(str[row]!=str[col]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends