class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> pref(n + 1);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + arr[i];
            ans += arr[i];
        }
        
        int len = 3;
        while (len <= n) {
            int l = 0, r = len;
            while (r <= n) {
                ans += pref[r++] - pref[l++];
            }
            len += 2;
        }
        
        return ans;
    }
};