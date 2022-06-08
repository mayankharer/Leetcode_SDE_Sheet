class Solution {
public:
    bool ispal(string &s){
        string rev = s;
        reverse(rev.begin(),rev.end());
        if(s == rev) return true;
        else
            return false;
    }
    
    int removePalindromeSub(string s) 
    {
        int cnt = 0;
        if(ispal(s) == true) cnt = 1;
        else cnt = 2;
        return cnt;
    }
};