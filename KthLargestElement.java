class Solution {
    public int findKthLargest(int[] nums, int k) 
    {
        Arrays.sort(nums);
        int len=nums.length;
        //Arrays.sort(nums,Collections.reverseorder()); //descending order
        return nums[len-k];
        
    }
}
