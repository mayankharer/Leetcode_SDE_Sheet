class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0;
        //first get the sum of first k-sized window
        for(int i=0;i<k;i++) ans+=cardPoints[i];
        int total=ans,n=cardPoints.size();
        for(int i=k-1;i>=0;i--,n--){
            total=total-cardPoints[i]+cardPoints[n-1];
            ans=max(ans,total);
        }
        return ans;
    }
};