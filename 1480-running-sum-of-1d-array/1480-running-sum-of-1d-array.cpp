class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sm = nums[0];
        vector<int> res;
        res.push_back(sm);
        for(int i=1;i<nums.size();i++){
            sm+=nums[i];
            res.push_back(sm);
        }
        return res;
    }
};