class Solution {
public:
    bool canWinNim(int n) {
        // base condition is if some one has 4 stones left then he is to surely loose
        return (n%4!=0);
    }
};