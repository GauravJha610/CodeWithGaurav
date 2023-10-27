class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;
        int lastWord;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                count++;
            }
            else{
                if(count!=0){
                    lastWord=count;
                    count=0;
                } 
            }
        }
        if(count!=0){
            lastWord=count;
        }
        return lastWord;
    }
};