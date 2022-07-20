class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n  = strs.size();// base case
        if(n==0) return ""; // if empty return 0
        
        string ans = "";
        sort(begin(strs),end(strs));
        // take two pointer one from start and one from end
        string a = strs[0]; // starting pointer  
        string b = strs[n-1]; // ending pointer
        
        for(int i = 0; i < a.size() ; i++){
            // adding the character to our ans string if the                                    character matches
            if(a[i]==b[i]) ans += a[i]; 
            else break;
        }
        return ans;
    }
};