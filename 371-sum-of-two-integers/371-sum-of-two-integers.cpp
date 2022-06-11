class Solution {
public:
    int getSum(int a, int b) {
        
        // Algorithm 
        // we loop until the second integer becomes zero
        // we use c bit for carry condition to get the common bits betwn a & b using & operator
        while(b) {
            unsigned c = a&b;
            a ^= b;
            b = c << 1;
        }
        return a;
            
        
    }
};