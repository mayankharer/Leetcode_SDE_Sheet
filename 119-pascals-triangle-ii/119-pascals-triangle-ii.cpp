class Solution {
public:
    long double fact(int n){
        if(n<2)
            return 1;
        return n*fact(n-1);
    }
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int j = 0;j<=rowIndex;j++){
            double temp = (fact(rowIndex)/(fact(j)*fact(rowIndex-j)));
            ans.emplace_back(temp);               
        }
       return ans;
    }
};
