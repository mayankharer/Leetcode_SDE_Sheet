class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // T.C --> O(N2)
	    // for (int i = 0; i < nums.size(); i++){
	    // for (int j = i + 1; j < nums.size() && j <= i + k; j++)
	    // {
	    // if (nums[j] == nums[i]) return true;
	    // }
	    // }
	    // return false;
        
        //-------------  T.C --> O(N)
    unordered_map<int,int> m;

    for(int i=0;i<nums.size();i++){
        if(m.count(nums[i])!=0 && (i-m[nums[i]]<=k)){  // important condition
            return true;
        }   
        m[nums[i]]=i; // updating the map with the current index for current value
    }
    return false;
    }
};