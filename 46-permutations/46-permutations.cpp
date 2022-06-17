// using backtracking and recursion
class Solution {
private:
    void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans){
        // base case
        if(index == nums.size()){
            ans.emplace_back(nums);
            return;
        } 
        
        // swapping the valus for each of the permutation
        for(int i = index;i<nums.size();i++){
            swap( nums[index] , nums[i] );
            recurPermute(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> ans;
        recurPermute(0,nums,ans);
        return ans;
    }
};

// this is implementataion using stl        
// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         // this is implementataion using stl        
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ans;
//         ans.push_back(nums);
//         while(next_permutation(nums.begin(),nums.end()))
//             ans.push_back(nums);
//         return ans;
//     }
// };