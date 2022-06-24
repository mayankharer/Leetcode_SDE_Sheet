// Brute force TC is more i.e nlogn
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++){
            int num = i;
            int c = 0;
            while(num){
                c+=num%2;
                num/=2;
            }
            ans[i] = c;
        }
        return ans;
    }
};
