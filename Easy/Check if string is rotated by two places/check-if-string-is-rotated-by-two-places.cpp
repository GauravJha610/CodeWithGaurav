//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n1=str1.size();
        int n2=str2.size();
        if(n1!=n2){
            return false;
        }
        int k=0;
        int i=2,j=n1-2;
        int flag1=0,flag2=0;
        while(k<n1){
            i=i%n1;
            j=j%n1;
            if(str1[i]!=str2[k]){
                flag1=1;
            }
            if(str1[j]!=str2[k]){
                flag2=1;
            }
            i++;j++;k++;
        }
        if(flag1!=1 || flag2!=1){
            return true;
        }
        else{
            return false;
        }
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends