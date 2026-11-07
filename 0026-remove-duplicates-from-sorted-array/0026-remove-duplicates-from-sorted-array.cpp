class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int i=1;


  while(i<nums.size()){
          if(nums[i]!=nums[i-1]){
            nums[count]=nums[i];
            count++;
       
        }
        
        i++;

    }

   return count;    
    }
};