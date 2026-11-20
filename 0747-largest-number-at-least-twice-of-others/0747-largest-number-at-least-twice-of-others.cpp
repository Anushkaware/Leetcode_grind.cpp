class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=nums[0];
        int maxIND=0;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                maxIND=i;
            }
        }
             for(int i=0;i<nums.size();i++){
                if(i==maxIND||nums[i]==maxi){
                    continue;
                }
                if(maxi>=(nums[i]*2)){
                    ans=maxIND;
                }
                else{
                    return -1;
                }
             }
        
        return ans;
        
    }
};