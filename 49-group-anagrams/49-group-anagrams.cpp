class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp; //key is string and value is vector of string
        for (string s : strs) {                     
            string t = s; 
            sort(t.begin(), t.end());
            mp[t].push_back(s);
            cout << t << endl;
        }
        vector<vector<string>> anagrams;
        for (auto p : mp) { 
            anagrams.push_back(p.second);
        }
        return anagrams;
    }
};