class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans; 
        for(int i = 0 ;i < numRows ; i++ )
        {
            vector<int>v(i+1,1);    //size of the vector is i+1 and every element is                                                   initialised to 1
            for(int j = 1;j < i;j++){ 
            //as all the vector elements are ini to 1 we know first and last element is 1 so                   we just traverse from 1 to j < i as vector is resized to i+1
                
                v[j]    =       ans[i-1][j]         +    ans[i-1][j-1];
                    //       gives us the element      gives us the element    
                    //       just above j              previos element above j
                
            }
            ans.emplace_back(v);
        }
        return ans;
    }
};

