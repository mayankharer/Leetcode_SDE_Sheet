class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0,prev_sum =0,s = nums.size();
        for(auto i:nums) sum+=i;
        for(int i=0;i<s;i++){
            if(prev_sum == sum - prev_sum - nums[i]){
                return i;
            }
            prev_sum += nums[i];
        }
        return -1;
    }
};