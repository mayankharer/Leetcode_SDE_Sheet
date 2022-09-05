class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int x = start + 2*i;
            v.push_back(x);
        }
        int res = v[0];
        for(int i=1;i<v.size();i++){
            res ^= v[i];
        }
        return res;
    }
};