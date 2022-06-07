class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Use of Hash Table storing the count 
        int n  = nums.size();
        unordered_map<int,int> counts;
        for (auto v : nums) {
            if(++counts[v] > n/2) return v;
        }
        return 0;
    }
};