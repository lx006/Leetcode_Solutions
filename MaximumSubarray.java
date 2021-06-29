class Solution {
    public int maxSubArray(int[] nums) 
    {
       /* int max=nums[0],sum;
        for(int i=0;i<nums.length;i++)
        {
            sum = 0;
            for(int j=i;j<nums.length;j++)
            {
                sum+=nums[j];
                if(sum>max)
                {
                    max = sum;
                }
            }
        }
        return max;  */
        int maximum = 0;
        int ans = nums[0];
        for(int i=0;i<nums.length;i++)
        {
            maximum = Math.max(nums[i],maximum+nums[i]);
            ans = Math.max(maximum,ans);
        }
        return ans;
    }
}
