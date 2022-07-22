class Solution {
public:
    int findMin(vector<int>& n) {
        int l = 0;
        int h = n.size()-1;
        while(l<h){
            int m = l + (h-l)/2;
            if(n[m]>n[h]) l = m+1;
            else if(n[m]<n[h]) h = m;
            else h--;
        }
        return n[l];
    }
};