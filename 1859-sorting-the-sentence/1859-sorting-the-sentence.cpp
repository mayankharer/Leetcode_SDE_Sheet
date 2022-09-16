class Solution {
public:
    string sortSentence(string s) {
        
        vector<string>str(9); //as s consists of digits from 1 to 9.
        
        stringstream test(s);
        string tmp;
        
        while(test >> tmp)
           str[tmp[tmp.length()-1]-'1']=tmp.substr(0,tmp.length()-1);
        
        
        string ans;
        for(string st : str)
            if(st.size())
                ans+=st + " ";
            
        ans.pop_back();
        return ans;
    }
};