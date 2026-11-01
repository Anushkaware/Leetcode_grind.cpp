class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int dig=0; int count=0;
        int n;
        
        for(int i=0;i<nums.size();i++){
             n =nums[i];
            while(n>0){
                n=n/10;
                count++;
            }
            if(count%2==0){
                dig++;
                count=0;
            }
        else{
            count=0;
        }
        }
        return dig;
        
    }
};