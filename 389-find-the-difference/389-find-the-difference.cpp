class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_s = 0,sum_t = 0,res=0;
        for(auto i:s) sum_s+= i-'a';
        for(auto i:t) sum_t+= i-'a';
        res = sum_t - sum_s;
        return res+'a';
        
    }
};