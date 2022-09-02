class Solution {
public:
    string removeStars(string s) {
        stack<char> helper;
        for(auto i:s){
            if(i != '*') helper.push(i);
            else helper.pop();
        }
        string ans = "";
        while(!helper.empty()){
            ans+=helper.top();
            helper.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};