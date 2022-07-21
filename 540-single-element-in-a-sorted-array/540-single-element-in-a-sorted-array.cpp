class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        /*//we can use XOR property 
        p xor 0 = p
        p xor p = 0
        we can traverse the whole vector and find xor
        */
        int ele =0;
        for(int i=0;i<nums.size();i++){
            ele = ele^nums[i];
        }
        return ele;
        
    }
};