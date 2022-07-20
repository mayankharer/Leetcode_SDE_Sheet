class Solution {
public:
bool anagram(string str1, string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;
 
    // Sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}
public:
vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        int n=words.size();
        int i,j;
        map<int,int>mp;
        while(1)
        {
            bool be=false;
            
            for(i=1;i<n;i++)
            {
                if(mp[i]!=1 and anagram(words[i],words[i-1]))
                {
                    mp[i]=1;
                    be=true;
                    break;
                }
            }
            if(be==false)
                break;
            
        }
        for(i=0;i<n;i++)
        {
            if(mp[i]!=1)
                ans.push_back(words[i]);
        }
        return ans;
    }
};