class Solution {
public:
    int numberOfSteps(int num) {
        int step=0;

        while(num>0){
            if(num%2!=0){
                num=num-1;
                step++;
            }
            else{
                num=num/2;
                step++;
            }
        }
        return step;
    }
};