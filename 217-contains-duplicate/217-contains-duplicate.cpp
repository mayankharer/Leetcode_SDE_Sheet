class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // convert the vector into a unorderd set
        unordered_set<int>us(nums.begin(), nums.end());
        // if the size of set and vector are not equal then there are duplicates 
        // if the size are not equal then true is returned
        // else flase is returned is all elements are unique in the vector
        return us.size() != nums.size();
    }
};    
