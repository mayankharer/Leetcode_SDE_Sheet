class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0;i<numbers.size();i++){
            if(mp.find(target - numbers[i])!=mp.end()){
                ans.emplace_back(mp[target - numbers[i]]+1);
                ans.emplace_back(i+1);
                return ans;
            }
            mp[numbers[i]] = i;
        }
        return ans;
        
    }
};



// int low = 0;int high = numbers.size()-1;int a = 0;int b = 0;
// while(low<high){
//     if(numbers[low] + numbers[high] == target) {
//         a = low+1;
//         b = high+1;
//     } else if(numbers[low] + numbers[high] < target) low++;
//     else high--;
// }
// return {a,b};