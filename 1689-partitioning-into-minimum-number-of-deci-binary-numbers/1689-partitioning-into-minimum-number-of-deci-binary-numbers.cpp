class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;// converting the strign to integer
	    for(auto& ch : n) ans = max(ans, ch - '0'); 
        // our answer is nothing but the maximum digit in the given string
	    return ans;
    }
};