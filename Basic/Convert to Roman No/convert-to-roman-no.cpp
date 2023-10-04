//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        string ans="";
        while(n>0){
            int q;
            if(n>=1000){
                q=n/1000;
                n=n%1000;
                for(int i=0;i<q;i++){
                    ans+='M';
                }
            }
            else if(n>=900){
                q=n/900;
                n=n%900;
                for(int i=0;i<q;i++){
                    ans+="CM";
                };
            }
            else if(n>=500){
                q=n/500;
                n=n%500;
                for(int i=0;i<q;i++){
                    ans+='D';
                };
            }
            else if(n>=400){
                q=n/400;
                n=n%400;
                for(int i=0;i<q;i++){
                    ans+="CD";
                }
            }
            else if(n>=100){
                q=n/100;
                n=n%100;
                for(int i=0;i<q;i++){
                    ans+='C';
                }
            }
            else if(n>=90){
                q=n/90;
                n=n%90;
                for(int i=0;i<q;i++){
                    ans+="XC";
                }
            }
            else if(n>=50){
                q=n/50;
                n=n%50;
                for(int i=0;i<q;i++){
                    ans+='L';
                }
            }
            else if(n>=40){
                q=n/40;
                n=n%40;
                for(int i=0;i<q;i++){
                    ans+="XL";
                }
            }
            else if(n>=10){
                q=n/10;
                n=n%10;
                for(int i=0;i<q;i++){
                    ans+='X';
                }
            }
            else if(n>=9){
                q=n/9;
                n=n%9;
                for(int i=0;i<q;i++){
                    ans+="IX";
                };
            }
            else if(n>=5){
                q=n/5;
                n=n%5;
                for(int i=0;i<q;i++){
                    ans+='V';
                }
            }
            else if(n>=4){
                q=n/4;
                n=n%4;
                for(int i=0;i<q;i++){
                    ans+="IV";
                }
            }
            else if(n>=1){
                q=n/1;
                n=n%1;
                for(int i=0;i<q;i++){
                    ans+='I';
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends