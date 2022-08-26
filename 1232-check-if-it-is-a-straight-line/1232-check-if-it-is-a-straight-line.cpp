class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // using two point formula 
//         int cz = coordinates.size();
//         if(cz==1) return false; //one point doesnt make a line
//         if(cz==2) return true; // two points is always a straight line
        
//         int x0 = coordinates[0][0],y0 = coordinates[0][1];   
//         int dx = coordinates[1][0] - x0,dy = coordinates[1][1]-y0;
        
//         for (int i = 1; i < cz; i++) {   // Checking two point formula for each point with the first point
//             int x = coordinates[i][0], y = coordinates[i][1];
//             if (dx * (y - y0) != dy * (x - x0))  // Two point formula of line, if (x2-x1)*(y1-y0) = (x1-x0)(y2-y1), then a straight line, otherwise not
// 			    return false;
//         }
//         return true;
        
        
        ///------------------------------------------------------------------------------------------
        // calulating  slope   and checking for all values in the  vector
        float slope = get_slope(coordinates[0],coordinates[1]);
        for(int i=2;i<coordinates.size();++i){
            float m = get_slope(coordinates[i],coordinates[0]);
            if(m != slope) 
                return false;
        }
        return true;
    }
    
    
    float get_slope(vector<int>& p1 , vector<int>& p2){
        if(p1[0] == p2[0]) return 100000;
        return (float)(p2[1] - p1[1])/(p2[0]-p1[0]);
        
    }
};