class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // int i;
        // for(i=1;i<nums.size()+1;i++){
        //     int found=false;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]==i){
        //             found=true;
        //             break;
        //         }
        //         }
        //        if(found==false){
        //         return i;
        //        }
        //     } 
        //     return i;
        int n=nums.size();
            for(int i=0;i<n;i++){
                while(nums[i]>=1&&nums[i]<=n&&nums[nums[i]-1]!=nums[i]){
                    swap(nums[i],nums[nums[i]-1]);
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i]!=i+1){
                    return i+1;
                }
            }
        return n+1;
    }
};