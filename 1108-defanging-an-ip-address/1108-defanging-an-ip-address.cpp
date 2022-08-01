class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(auto i:address){
            
            if( i != '.'){
                ans+=i; 
            }
            else if( i == '.'){
                ans+="[.]";
            };
        }
        return ans;    
        
    }
};