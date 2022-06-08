class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        for(auto x:arr){map[(x%k+k)%k]++;}
        if(map[0]%2==1){return false;}
        for(int i=1;i<k;i++){if(map[i]!=map[k-i]){return false;}}
        return true;
    }
};
// class Solution {
// public:
//     bool canArrange(vector<int>& arr, int k) {
//         map<int,int> mp;
//         for(int i = 0;i< arr.size();i++){
//             mp[abs(arr[i])%k]++;
//         }
//         for(auto i: mp){
//             int rem = i.first; 
//             if(rem == 0 ){
//                 if(mp[rem]%2) return false;
//             }
//             else if(mp[rem]!=mp[k-rem]) return false;
//         }
        
//         return true;
//     }
// };