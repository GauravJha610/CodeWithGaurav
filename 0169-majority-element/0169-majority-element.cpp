class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0,limit=floor(n/2)+1;
        for(int i=0;i<n-1;i++){
            count++;
            if(nums[i]==nums[i+1]){
                continue;
            }
            else{
                if(count>=limit){
                    return nums[i];
                }
                else{
                    count=0;
                }
            }
        }
        count++;
        if(count>=limit){
            return nums[n-1];
        }
        return -1;
    }
};