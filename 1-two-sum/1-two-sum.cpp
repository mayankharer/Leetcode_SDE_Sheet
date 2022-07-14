class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

//------------------- OPTIMAL APPROACH--------------------------        
//         vector<int> ans;
//         unordered_map<int,int> mp;
//         for(int i = 0;i<nums.size();i++){
//             if(mp.find(target - nums[i])!=mp.end()){
//                 ans.emplace_back(mp[target - nums[i]]);
//                 ans.emplace_back(i);
//                 return ans;
//             }
//             mp[nums[i]] = i; // inserting the key of given array and                                       assigning the values as indices 
//         }
//         return ans;
        
//--------------------------------------------------------------------------------
        // two pointer approach
        vector<int> res,copy;
        copy = nums;
        sort(copy.begin(),copy.end());
        int low = 0, high = nums.size()-1;
        int n1,n2;
        
        while(low<high){
            if(copy[low]+copy[high] == target){
                n1 = copy[low];
                n2 = copy[high];
                break;
            }else if(copy[low]+copy[high] > target) high--;
            else low++;
        }
        for(int i = 0;i<nums.size();++i){
            if(nums[i]==n1) res.emplace_back(i);
            else if(nums[i]==n2) res.emplace_back(i);
        }
        return res;
        
    }
};