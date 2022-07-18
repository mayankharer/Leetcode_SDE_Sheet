class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_c = 0 ,cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 1 ) cnt++;
            else cnt = 0;
            max_c = max(max_c,cnt);
        }
        return max_c;
    }
};