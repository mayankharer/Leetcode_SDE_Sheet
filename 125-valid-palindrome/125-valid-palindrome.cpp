class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        string ans = "";
        for(int i = 0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90 || s[i]>=48 && s[i]<=57){
                // v.emplace_back(s[i]);
                if(s[i]>=65 && s[i]<=90) ans+=s[i]+32;
                else
                    ans+=s[i];
            }
        }
        string rev;
        rev = ans;
        reverse(ans.begin(),ans.end());
        return ans==rev;        
    }
};

