class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1,sum;
        int pro_num=n,sum_num=n;
        while(pro_num>0){
            pro *=  pro_num%10;
            pro_num/=10;
        }
        cout << pro<<endl;
        while(sum_num>0){
            sum += sum_num%10;
            sum_num/=10;
        }
        cout << sum;
        return pro-sum;
    }
};