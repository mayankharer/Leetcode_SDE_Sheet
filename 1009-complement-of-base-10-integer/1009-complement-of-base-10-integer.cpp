class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        //first create a mask
        int mask = 0;
        if(n == 0) return 1;
        
        while(m != 0){
        // left shift the mask until the the right shift of given number                is not zero
            mask = (mask << 1) | 1; 
        // right shift the given number until it is zero
            m = m >> 1;
        }
        
        int ans = (~n) & mask;
        
        return ans;
        
    }
};