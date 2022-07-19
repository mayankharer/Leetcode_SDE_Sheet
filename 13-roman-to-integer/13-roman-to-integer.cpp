class Solution {
public:
	int romanToInt(string s) {
        //use map 
		int sum=0;
		map<char, int> val={{'M', 1000},{'D', 500},{'C', 100},{'L', 50},{'X', 10},{'V', 5},{'I', 1}};
		for(int i=0; i<s.size(); i++){            

			if(val[s[i]] < val[s[i+1]]){
				sum = sum + (val[(s[i+1])] - val[s[i]]);
				i++;               
			}else{
			sum = sum + val[s[i]];   
			}
		}
		return sum;
	}
};