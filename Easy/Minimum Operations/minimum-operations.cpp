//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int count=0;
        while(n>0){
            if(floor(log2(n))==log2(n)){
                return count+log2(n)+1;
            }
            else {
                if(n%2==0){
                    count++;
                    n/=2;
                }
                else{
                    count++;
                    n--;
                }
            }
            
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends