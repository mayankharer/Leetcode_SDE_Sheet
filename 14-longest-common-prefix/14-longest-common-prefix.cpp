class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n  = strs.size();
        if(n==0) return "";
        
        string ans = "";
        sort(begin(strs),end(strs));
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i = 0; i < a.size() ; i++){
            if(a[i]==b[i]) ans += a[i]; 
            // adding the character to our ans string if the                                    character matches
            else break;
        }
        return ans;
    }
};