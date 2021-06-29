class Solution {
    public int maxArea(int[] height) 
    {
       /* int area = 0;
        for(int i=0;i<height.length;i++)
        {
            for(int j=i+1;j<height.length;j++)
            {
                area = Math.max(area,Math.min(height[i],height[j])*(j-i));  
            }
        }
       return area; */
        
        int area = 0, start = 0, end = height.length-1;
        while(start<end)
        {
            area = Math.max(area,Math.min(height[start],height[end])*(end-start));
            if(height[end]>height[start])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return area;
    }
}
