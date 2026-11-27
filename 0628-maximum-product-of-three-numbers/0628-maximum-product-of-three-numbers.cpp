class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int i=0;
        int prod=nums[i]*nums[i+1]*nums[n];
        int prod2=nums[n]*nums[n-1]*nums[n-2];
        int maxi=max(prod,prod2);
        return maxi;
    }
};