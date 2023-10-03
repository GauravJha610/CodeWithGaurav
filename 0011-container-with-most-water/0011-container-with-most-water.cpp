class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        long area=0;
        int i=0,j=n-1;
        while(i<j){
            area=max(area,(long)(min(height[i],height[j])*(j-i)));
            if(height[i]<height[j]){
                i++;
            }
            else if(height[i]>height[j]){
                j--;
            }
            else{
                if(j-i>=3){
                    if(height[i+1]>height[j-1]){
                        i++;
                    }
                    else{
                        j--;
                    }
                }
                else{
                    i++;
                }
            }
        }
        return area;
        
    }
};