class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0, n = s.length();
        while(n>0){
            if(s[--n] != ' ') res++;
            else if(res>0) return res;
        }
        return res;

    }
};