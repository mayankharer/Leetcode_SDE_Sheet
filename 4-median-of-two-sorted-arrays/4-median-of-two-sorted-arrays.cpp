class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merge the two  vectors into one vector
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        // sort the vector
        sort(nums1.begin(),nums1.end());
        int s = nums1.size();
        // create a answer variable
        double ans;
        //checking if length is even or odd
        
        // if the length is even
        if(s%2 == 0) ans = (double)(nums1[s/2] + nums1[(s/2)-1])/2;
        
        // else if length is odd
        else ans =  (double)nums1[(s/2)];
        
        return ans;
        
    }
};