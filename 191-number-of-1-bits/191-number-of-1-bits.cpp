class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c =0;
        // we run a loop until the base case i.e n  becomes zero
        // n = (n) & (n-1)
        while(n){
            n=n&(n-1);
            c++;
        }
        return c;
    }
};