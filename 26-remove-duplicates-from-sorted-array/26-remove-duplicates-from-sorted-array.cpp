/*
Intuition: We can think of using two pointers ‘i’ and ‘j’, we move ‘j’ till we don’t get a number nums[j] which is different from nums[i]. As we got a unique number we will increase the i pointer and update its value by nums[j]. 
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        nums.clear();
        
        for(auto i:s){
            nums.emplace_back(i);
        }
        sort(nums.begin(),nums.end());
        return s.size();
        // if(nums.size()==0)
        //     return 0;
        // int i = 0;
        // for(int j=1;j<nums.size();j++){
        //     if(nums[j]!=nums[i]){
        //         i++;
        //         cout << i << endl;
        //         nums[i]=nums[j];
        //     }
        // }
        // return i+1;
    }
};