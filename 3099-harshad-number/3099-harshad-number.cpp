class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int prev=x;
        while(x>0){
            int dig =x%10;
            sum=sum+dig;
             x=x/10;
        }if(prev%sum==0){
            return sum;
        }
        return -1;
    }
};