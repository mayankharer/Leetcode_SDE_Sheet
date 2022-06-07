class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         // Use of Hash Table storing the count 
//         int n  = nums.size();
//         unordered_map<int,int> counts;
//         for (auto v : nums) {
//             if(++counts[v] > n/2) return v;
//         }
//         return 0;
        
        //Moores voting algorithm
        int count = 0;
        int element = 0;
        
        for(int num:nums){
            if(count==0){
                element = num;
            }
            if(num == element) count+=1;
            else count-=1;
        }
        return element;
    }
};