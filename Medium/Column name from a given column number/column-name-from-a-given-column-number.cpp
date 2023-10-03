//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans="";
        char freq[26];
        int rem;
        long long int q;
        freq[0]='Z';
        for(int i=1;i<26;i++){
            freq[i]=i+64;
        }
        while(n>0){
            rem=n%26;
            ans+=freq[rem];
            n=n/26;
            if(rem==0){
                n=n-1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends