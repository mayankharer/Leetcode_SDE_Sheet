// first check for min amd max indices store in two variables

// condition 1: to delete from left and right 
// -----------> (a+1)->[0 index so add 1 to a] + (n-b)->[bth index size is vector size - b]  
// condition 2: to delete from left 
// -----------> simply the ans is b+1
// condition 2: to delete from right 
// -----------> simply the ans is n-a
class Solution {
public:
    int minimumDeletions(vector<int>& A) {
        int a = max_element(begin(A), end(A)) - begin(A);
        int b = min_element(begin(A), end(A)) - begin(A);
        int N = A.size();
        if (a > b) swap(a, b);
        return min({ a + 1 + N - b, b + 1, N - a });
    }
};
