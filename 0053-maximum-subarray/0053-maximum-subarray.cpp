typedef long long ll;
typedef long l;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        l n=nums.size();
        ll maxsum=INT_MIN;
        ll currsum=0;
        // l start=0,end=0;
        for(l i=0;i<n;i++){
            currsum+=nums[i];
            if(currsum>maxsum){
                maxsum=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};