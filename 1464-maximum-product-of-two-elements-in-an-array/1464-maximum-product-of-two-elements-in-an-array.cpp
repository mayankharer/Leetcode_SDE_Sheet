class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // brute force
        sort(nums.begin(),nums.end());
        int x = nums.size();
        return (nums[x-1]-1)*(nums[x-2]-1);
    
    }
};