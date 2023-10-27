class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> umap;
        int key=n;
        while(umap.count(key)==0){
            umap[key]=1;
            int sum=0;
            while(key>0){
                sum+=pow(key%10,2);
                key/=10;
            }
            key=sum;
            if(key==1){
                return true;
            }
        }
        return false;
    }
};