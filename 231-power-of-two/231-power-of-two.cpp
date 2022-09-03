class Solution {
public:
    bool isPowerOfTwo(long n) {
	    // using bit manipulation
        return (n && !( n & (n-1)));
        
        
        // ------- Recursive solution-----------
        // if(n <= 1) return n == 1; //base condition
	    // return n % 2 == 0 && isPowerOfTwo(n / 2);
    }
};