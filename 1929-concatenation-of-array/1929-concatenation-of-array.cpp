class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans = nums;
        int a = nums.size();
        vector<int> sol(a);
        nums.insert(nums.end(),ans.begin(),ans.end());
        return nums;
        
        
    }
};