class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(m>n){
            return -1;
        }
        int ans=-1;
        for(int i=0;i<=n-m;i++){
            int k=i;
            int j=0;
            if(haystack[k]==needle[j]){
                ans=k;
                while(k<n && j<m){
                    if(haystack[k]!=needle[j]){
                        break;
                    }
                    if(haystack[k]==needle[j] && j==m-1){
                        return ans;
                    }
                    k++;j++;
                }
                
            }
        }
        return -1;
    }
};