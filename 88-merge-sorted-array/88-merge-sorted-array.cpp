class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // brut force
        int len = m + n;
        vector<int> temp;
        for(int i = 0; i < m;i++) temp.push_back(nums1[i]);
        for(int i = 0; i < n;i++) temp.push_back(nums2[i]);
        nums1.resize(len);
        nums1 = temp;
        sort(nums1.begin(),nums1.end());
        for(auto it: nums1)
            cout << it;
        
        // doing it in optimal way  ---> The GAP ALgorithm
       
    }
};