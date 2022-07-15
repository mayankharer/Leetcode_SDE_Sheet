class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i =0 ; i<s.size() ; i+=2*k){
            int first = i;
            int last = (i + k -1) > s.size()-1 ? s.size()-1 : i+k-1;
            while(last>first){
                swap(s[first], s[last]);
                first++;
                last--;
            }
        }
        
        return s;
    }
};