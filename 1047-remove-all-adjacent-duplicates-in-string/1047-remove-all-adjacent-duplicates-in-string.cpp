class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size() == 1) return s;
        stack<char> helper;
        for(auto i : s){
            if(helper.empty()) helper.push(i);
            else{
                if(i == helper.top()) helper.pop();
                else helper.push(i);
            }
        }
        string ans;
        while(!helper.empty()){
            ans.push_back(helper.top());
            helper.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};