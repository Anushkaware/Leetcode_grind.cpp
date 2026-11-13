
class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {

        int n = nums.size();
        long long count = 0;

        for(int i = 0; i < n; i++)
        {
            int maxi = nums[i];
            long long operations = 0;

            for(int j = i; j < n; j++)
            {
                maxi = max(maxi, nums[j]);

                operations += maxi - nums[j];

                if(operations <= k)
                {
                    count++;
                }
            }
        }

        return count;
    }
};
