class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> hsh;
        int ct=0;
        
        vector<string> arr = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        
        for(string str:words){
            string temp="";
            for(char ch:str) temp=temp+arr[ch-'a'];
            hsh.insert(temp);
        }
       
        return hsh.size();
    }
};