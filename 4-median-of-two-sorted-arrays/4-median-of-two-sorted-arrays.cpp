class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int s = nums1.size();
        double ans;
        
        if(s%2 == 0) ans = (double)(nums1[s/2] + nums1[(s/2)-1])/2;
        
        else ans =  (double)nums1[(s/2)];
        
        return ans;
        
    }
};