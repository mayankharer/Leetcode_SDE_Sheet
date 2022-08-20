class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l_s = s.size();
        int l_t = t.size();
        int i=0,j=0;
        while(i < l_s && j < l_t){
            if(s[i] == t[j])
                i++;
            j++;
        }
        return i==l_s;
    }
};