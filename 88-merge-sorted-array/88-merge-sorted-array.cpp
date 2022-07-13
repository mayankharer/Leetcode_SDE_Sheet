class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // brut force
//         int len = m + n;
//         vector<int> temp;
//         for(int i = 0; i < m;i++) temp.push_back(nums1[i]);
//         for(int i = 0; i < n;i++) temp.push_back(nums2[i]);
//         nums1.resize(len);
//         nums1 = temp;
//         sort(nums1.begin(),nums1.end());
//         for(auto it: nums1)
//             cout << it;
        
        // doing it in optimal way  ---> The GAP ALgorithm
        // Optimal Solution Time O(N) & Auxiliary Space O(1)
        // Two pointer approach 
        int p1 = m - 1, p2 = n - 1, curr=m+n-1;
        for (int i = curr; i >= 0 && p2 >=0 ;i--) {  
            if (p1 >= 0 && nums1[p1] > nums2[p2]) 
                nums1[i] = nums1[p1--]; 
            else 
                nums1[i] = nums2[p2--];
            }  
       
    }
};