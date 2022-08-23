class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length()-1;i++){
            cout <<s[i+1] - s[i]<<endl; 
            if(s[i+1] - s[i] < 0)
                return false;
        }
        return true;
    }
};