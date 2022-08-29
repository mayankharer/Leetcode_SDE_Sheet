class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> zeros;
        vector<int> res;
        for(auto i:nums){
            if(i==0) zeros.push_back(i);
            else res.push_back(i);
        }
        res.insert(res.end(),zeros.begin(),zeros.end());
        nums = res;
    }
};