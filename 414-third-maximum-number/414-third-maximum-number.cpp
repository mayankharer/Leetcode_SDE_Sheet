class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        vector<int> ans; // again store that unique elements in another vector 
        map<int,int> mp; // create a map for storing unique elements
        
        for(auto x:nums) mp[x]++;
        for(auto x:mp) ans.push_back(x.first);
        int s = ans.size();
        
        // finally check for the condition using ternary operator
        return (s<3) ? ans[s-1]:ans[s-3];
    }
};