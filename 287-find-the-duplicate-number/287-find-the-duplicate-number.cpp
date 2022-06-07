class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //brute force approach
        // sort(nums.begin(),nums.end());
        // vector<int> ans;
        // for(int i = 0;i<nums.size()-1;i++){
        //     if(nums[i] == nums[i+1])
        //         ans.push_back(nums[i]);    
        // }
        // return ans[0];
        
        // optimised approach using binary search
        int low = 1, high = nums.size() - 1, cnt;
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
            if(cnt <= mid)
                low = mid + 1;
            else
                high = mid - 1;
            
        }
        return low;
    }
};