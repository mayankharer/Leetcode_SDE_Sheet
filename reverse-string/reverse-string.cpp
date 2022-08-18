class Solution {
public:
    void swapp(char &x,char&y){
        char temp;
        temp = x ;
        x = y;
        y = temp;
    }
    
    void reverseString(vector<char>& s) {
        //  without using extra space-------> Two pointer approach
        int l=0,h=s.size()-1;
        for(int i = 0;i<s.size()/2;i++){
            swapp(s[l],s[h]);
            l++;
            h--;
        }
        
        //----------> by using extra space ---------------
        // vector<char> ans;
        // for(int i=s.size()-1;i>=0;i--) ans.emplace_back(s[i]);
        // s = ans;
    }
};