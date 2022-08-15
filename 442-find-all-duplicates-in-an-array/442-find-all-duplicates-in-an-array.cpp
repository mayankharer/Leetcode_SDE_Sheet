class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // Using set
        set<int> s;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(!s.insert(nums[i]).second){
                v.emplace_back(nums[i]);
            }
        }
        return v;
        
        
        // below solution is O(N) time complexity but also using extra space for map and vector
        // unordered_map<int,int> mp;
        // for(auto i:nums){
        //     mp[i]++;
        // }
        // vector<int> ans;
        // for(auto i :mp){
        //     if(i.second >1) ans.emplace_back(i.first);
        // }
        // return ans;
    }
};