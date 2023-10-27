//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int is_bleak(int n)
	{
	    for(int i=n-1;i>=n-log2(n+1);i--){
	        int num=i;
	        int count=0;
	        while(num>0){
	            num=num&(num-1);
	            count++;
	        }
	        if(i+count==n){
	            return 0;
	        }
	    }
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends