// Optimal solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxPro = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    return maxPro;    
    }
};

//------------- Brute force solution -> O(N) solution----------------
// class Solution {
// public:
//     int maxProfit(vector<int>& p) {
//         int maxPro = 0;
//         int n = p.size();
//         for(int i = 0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(p[j]>p[i]){
//                     maxPro = max(maxPro,p[j]-p[i]);
//                 }
//             }
//         }
//         return maxPro;
//     }
// };