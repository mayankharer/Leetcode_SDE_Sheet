
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Optimal solution
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
            map[nums[i]]++;
        
        int sum=0;
        for(auto it=map.begin();it!=map.end();it++)
        { 
            int count=0;
            if(it->second>1)
            {
                for(int i=1;i<it->second;i++)
                    count+=i;
                
                sum+=count;
            }
            
        }
        return sum;
    }
        // Brute force solution
        // int cnt = 0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(i<j && nums[i]==nums[j]){
        //             cnt++;
        //         }
        //     }    
        // }
        // return cnt;
};
