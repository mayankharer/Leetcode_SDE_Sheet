class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int len = arr.size();
        unordered_map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        vector<int> occ;
        for(auto i:mp) occ.push_back(i.second);
        sort(occ.begin(),occ.end());
        int sm =0;
        int n = arr.size();
        for(int i = occ.size()-1;i>=0;i--){
            n-=occ[i];
            if(n<=(len/2)){
                sm+=1;
                break;
            }
            else sm++;
        }        
        return sm;
    }
};
