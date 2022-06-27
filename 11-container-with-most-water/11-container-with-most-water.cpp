class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0, i=0, j=n-1, area;
        while(i<j){
            area= (j-i)*min(height[i],height[j]);
            ans=max(ans,area);
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return ans;
    }
};