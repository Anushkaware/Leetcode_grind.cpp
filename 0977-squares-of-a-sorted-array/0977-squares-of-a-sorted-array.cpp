class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n=nums.size();
     for(int i=0;i<n;i++){
        nums[i]=nums[i]*nums[i];
     }  
     int start=0;
     int end=n-1;
     int pos=n-1;
     vector<int> ans(n);
     while(start<=end){
        if(nums[start]<nums[end]){
            ans[pos]=nums[end];
            end--;
            pos--;

        }else{
            ans[pos]=nums[start];
            start++;
            pos--;
        }
     } 
     return ans;
    }
};