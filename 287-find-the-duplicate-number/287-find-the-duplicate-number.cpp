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
//         int low = 1, high = nums.size() - 1, cnt;
//         while(low <=  high)
//         {
//             int mid = low + (high - low) / 2;
//             cnt = 0;
//             for(int n : nums)
//             {
//                 if(n <= mid)
//                     ++cnt;
//             }
//             if(cnt <= mid)
//                 low = mid + 1;
//             else
//                 high = mid - 1;
            
//         }
//         return low;
//---------> Most optimised method Linked list cycle method
// take 2 pointers one is slow which traverses each element of the vector once and fast pointer that skips one element and jumps to thid element 
        int slow = nums[0];
        int fast = nums[0];
// the first loop runs until the slow and fast pointer does not meet or collide
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
// when they collide now set the fast pointer to first element and again traverse but now traverse at same pace   
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;        
    }
};