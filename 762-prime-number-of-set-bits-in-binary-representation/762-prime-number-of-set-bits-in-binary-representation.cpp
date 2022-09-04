class Solution {
public:
    int countSet(int x){
        int cnt = 0;
        while(x){
            x = (x & (x-1));
            cnt+=1;
        }
        return cnt;
    }
    
    bool isPrime(int n){
        if(n==2||n==3||n==5 ||n==7||n==11||n==13||n==17||n==19)
            return true;
        return false;
    }
    
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int i = left ; i<= right;i++){
            int count = countSet(i);
            if(isPrime(count)) res++;
        }
        return res;
    }
};