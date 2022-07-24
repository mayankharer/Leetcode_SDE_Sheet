// sliding window technique

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int i=0;//->window start
        int j=0;//->window end
        int maxC=0;//->max no of repeating elements 
        int ans=-1;
        unordered_map<char,int> mp;
        while(j<n)
        {
            mp[s[j]]++; // updating the key for the character s[j]
            maxC=max(maxC,mp[s[j]]);// updating the maxC no of repeating elements
            
            int curr_len=j-i+1;//Curr Len of the window
            if(curr_len-maxC>k) //the curr window has more than k replacable items case
            {
                mp[s[i]]--;
                i++;// shrinking the window
            }
            curr_len=j-i+1;// just in case i is changed
            ans=max(ans,curr_len);
            j++;
        }
        
        return ans;
    }
};