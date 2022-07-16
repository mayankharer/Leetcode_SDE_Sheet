class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;
        string s = jewels+stones;
        int cnt = 0;
        for(auto x:jewels){
            st.insert(x);
        }
        for(auto y:stones){
            if(st.find(y)!=st.end())
                cnt++;
        }
        
        return cnt;
        
    }
};